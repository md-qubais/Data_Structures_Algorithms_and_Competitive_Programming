#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;

int join_ropes(int *ropes,int n){
int res=0;
priority_queue<int,vector<int>, greater<int>> pq(ropes,ropes+n);
while(pq.size()>1){
int a=pq.top();
pq.pop();
int b=pq.top();
pq.pop();
int new_rope=(a+b);
res=res+(new_rope);

pq.push(new_rope);
}
return res;
}

int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int ropes[]={4,3,2,6};
	int n=4;
	cout<<join_ropes(ropes,n)<<endl;
	return 0;     
}