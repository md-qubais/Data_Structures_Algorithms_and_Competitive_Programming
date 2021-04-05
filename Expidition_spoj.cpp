#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2){
	return p1.first>p2.first;
	//because the one is smaller to the city is
	//greater from the truck
	//so sort them in reverse then we get farrer from 
	//the city
	//and we get nearest to the truck

}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	while(t--){
		int flag=0;
		//fuel and their respective distances
      vector<pair<int,int>> v;
      //to store the capacity of the fuel station
      priority_queue<int> q;
      int n;
      cin>>n;
      int d,f;//d for distance and f for fuel
      for(int i=0;i<n;i++){
       cin>>d>>f;
       v.push_back(make_pair(d,f));
      }
      sort(v.begin(),v.end(),compare);
      int D,F;//the initial capacity/fuel of the truck
      //and the distance of the town

      //and now we are updating the fuel station 
      //distance from the truck
      for(int i=0;i<v.size();i++){
     v[i].first=D-v[i].first;
      }
  //prev denotes that previous city that i have visisted
     int prev=0;
     int ans=0;
     int x=0;//current city
     //visiting the n city
     while(x<n){
     //if we have fuel to go to next city
     	if(F>=(v[x].first-prev)){
     		F=F-(v[x].first-prev);
     		q.push(v[x].second);
     		prev=v[x].first;
     	}else{
     		//check if you have any fueling station
     		//visisted in the priority queue
     		if(q.empty()){
                   flag=1;
                   break;
     		}
     		//otherwise we can refuel the fueling
     		//station which has higher value
     		F+=q.top();
     		q.pop();
     		ans++;
     		continue;
     	}
     	x++;
     }

  if(flag==1){
  	cout<<-1<<endl;
  	continue;
  }
  D=D-v[n-1].first;
  if(F>=D){
  	cout<<ans<<endl;
 continue;
  }
  flag=0;
while(F<D){
	if(q.empty()){
   flag=1;
   break;
	}
		F+=q.top();
		q.pop();
		ans+=1;
	}
	if(flag==1){
    cout<<-1<<endl;
    continue;
	}
 cout<<ans<<endl;



 	}

	return 0;     
}