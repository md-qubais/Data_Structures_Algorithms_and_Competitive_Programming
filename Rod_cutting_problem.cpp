#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//first we are building the recursive solution
int max_profit(int *prices,int n){
	//base case
	if(n<=0){
      return 0;
	}
	//rec case;
	int ans=INT_MIN;
	for(int i=0;i<n;i++){
      ans=max(ans,prices[i]+max_profit(prices,n-(i+1)));
	}

return ans;
}

//below is the top down tech
//recursion using memoization
int max_profit(int *prices,int n,int *dp){
	if(n<=0){
    return 0;
	}
	if(dp[n]!=0){
     return dp[n];
	}
    int ans=INT_MIN;
	for(int i=0;i<n;i++){
      ans=max(ans,prices[i]+max_profit(prices,n-(i+1)));
	dp[n]=ans;
	}
    

return dp[n];
}




int32_t main(){
	qubais_judge;
	IOS;
	int prices[]={1,5,8,9,10,17,17,20};
	int dp[100]={0};
	int n=sizeof(prices)/sizeof(int);
	cout<<max_profit(prices,n,dp)<<endl;
	return 0;    
}