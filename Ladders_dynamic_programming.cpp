#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int ladders_top_down(int n,int k,int *dp){
if(n<0){
return 0;
}
if(n==0 or n==1){
return 1;
}
if(dp[n]!=0){
return dp[n];
}
int ans=0;
for(int i=1;i<=k;i++){
ans+=ladders_top_down(n-i,k,dp);
}
dp[n]=ans;
return dp[n];
}


int ladders_bottom_up(int n,int k,int *dp){
dp[0]=1;
for(int i=1;i<=n;i++){
	for(int j=1;j<=k;j++){
		if(i-j>=0){
           dp[i]+=dp[i-j];
		}

	}
}
return dp[n];
}


int ladders_bottom_up_optimized(){

}


int32_t main(){
	qubais_judge;
	IOS;
	int dp[100]={0};
	int n,k;
	cin>>n>>k;
	cout<<ladders_bottom_up(n,k,dp)<<endl;
	return 0;    
}