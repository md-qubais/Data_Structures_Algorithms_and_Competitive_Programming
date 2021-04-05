#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//this is just the recursive case
//with no optimization like overlapping 
//or memoization
//we are just doing it by recursion
//and it takes lots of time if the value of 
//n is greater very very large number of time 
//complexicity incase of exponention
int min_coins(int num,int *coins,int n){
	if(num<0){
      return INT_MAX;
	}

	if(num==0){
   return 0;
	}
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
     ans=min(ans,min_coins(num-coins[i],coins,n));
	}
return ans+1;
}


//this below is the code for the dp
//recursion + memoization 
//it is known as top down approach
int min_coins(int num,int *coins,int n,int *dp){
	if(num<0){
      return INT_MAX;
	}

	if(num==0){
   return 0;
	}
	if(dp[num]!=0){
return dp[num];
	}
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
     ans=min(ans,min_coins(num-coins[i],coins,n,dp));
	}
	dp[num]=ans+1;
return dp[num];
}

//now here  below is the code for 
//bottom up technique 
//and both bottom up and top down 
//requires the time complexicity for
//o(T*N)
int Min_coins(int num,int *coins,int n){
	int dp[num+1]={0};
	dp[0]=0;
	for(int i=1;i<=num;i++){
          dp[i]=INT_MAX;
          for(int j=0;j<n;j++){
          if(i-coins[j]>=0){
          	dp[i]=min(dp[i],dp[i-coins[j]]);
          }
          }
          dp[i]++;
	}
return dp[num];
}



int32_t main(){
	qubais_judge;
	IOS;
	int num;
	cin>>num;
	int dp[num+1]={0};
	int coins[]={1,2,5,10,20,50,100,200,2000};
	cout<<Min_coins(num,coins,sizeof(coins)/sizeof(int))<<endl;
	return 0;    
}

