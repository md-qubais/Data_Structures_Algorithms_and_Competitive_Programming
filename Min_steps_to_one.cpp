#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//here below we are using recursion 
//but it time complex will be in an exponention
int min_steps_to_one(int n){
	if(n==1){
   return 0;
	}
 return min(min_steps_to_one(n-1),min(min_steps_to_one(n/2),min_steps_to_one(n/2)))+1;
}


//we have reduced the time complexicity to o(n)
//ans space is o(n) as well same
//this is top down approach
//recursive and by using recursion we have used memoization
int min_steps_to_one(int n,int *dp){
if(n==1){
return 0;
}
int o1,o2,o3;
o1=o2=o3=INT_MAX;
if(dp[n]!=0){
return dp[n];
}
if(n%3==0){
o1=min_steps_to_one(n/3,dp);
}
if(n%2==0){
o2=min_steps_to_one(n/2,dp);
}
o3=min_steps_to_one(n-1,dp);
dp[n]=min(o1,min(o2,o3))+1;
return dp[n];
}


//now here we are using the bottom up approach
//this is known as the actual dynamic programming
int Min_steps_to_one(int n){
	int dp[100]={0};
	dp[1]=0;
	for(int i=2;i<=n;i++){
		int o1,o2,o3;
		o1=o2=o3=INT_MAX;
		if(i%3==0){
           o1=dp[i/3];
		}
		if(i%2==0){
           o2=dp[i/2];
		}
		o3=dp[i-1];
      dp[i]=min(o1,min(o2,o3))+1;
	}
return dp[n];
}



int32_t main(){
	qubais_judge;
	IOS;
	int num;
	cin>>num;
	cout<<Min_steps_to_one(num)<<endl;
	return 0;    
}