#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;

void print(priority_queue<int,vector<int>,greater<int>> pq){
while(!pq.empty()){
cout<<pq.top()<<" ";
pq.pop();
}
cout<<endl;
}


int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
    int k;
    cin>>k;
    int n;
    int cs=0;
    priority_queue<int,vector<int>,greater<int> > pq;
    cin>>n;
    while(n!=0){
         if(n==-1){
               print(pq);
         }else if(cs<k){
         	cs++;
         	pq.push(n);
         }else{
         	if(pq.top()<n){
                pq.pop();
                pq.push(n);
         	}
         }
         cin>>n;
    }
	return 0;     
}