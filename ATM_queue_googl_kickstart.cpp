#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	int c=0;
	while(t--){
		c++;
		int mem,price;
		cin>>mem>>price;
		//here the pair is of their indices and 
		//their cost that we are withdrawing
		queue<pair<int,int>> q;
		for(int i=0;i<mem;i++){
			int n;
			cin>>n;
			q.push(make_pair(i+1,n));
		}
		
		cout<<"Case #"<<c<<": ";
		while(!q.empty()){
           pair<int,int> p=q.front();
           q.pop();
           if((p.second-price)<=(int)0){
                 cout<<p.first<<" ";
           }else{
             q.push(make_pair(p.first,p.second-price));
           }
		}
		cout<<endl;
	}
	return 0;     
}