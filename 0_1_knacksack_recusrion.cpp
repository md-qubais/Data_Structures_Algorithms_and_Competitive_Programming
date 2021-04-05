#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
int profit(int n,int c,int *prices,int *weights){
if(n==0||c==0){
return 0;
}
int ans=0;
int inc,exc;
inc=exc=INT_MIN;
if(c>=weights[n-1]) inc=prices[n-1]+profit(n-1,c-weights[n-1],prices,weights);
exc=profit(n-1,c,prices,weights);
ans=max(inc,exc);
return ans;
}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int prices[]={40,20,30,100};
	int weights[]={1,2,3,5};
	int c=7;
	int n=4;
	cout<<profit(n,c,prices,weights)<<endl;
return 0;
}