#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
int fibonacciModified(int t1, int t2, int n) {
int res=0;
for(int i=3;i<=n;i++){
res=t1+(t2*t2);
t1=t2;
t2=res;
}

return res;
}

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int n1,n2,t;
	cin>>n1>>n2>>t;
	cout<<fibonacciModified(n1,n2,t)<<endl;	
	return 0;     
}