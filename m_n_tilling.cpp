#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int ans(int n,int m){
	int dp[n+1]={0};
	for(int i=1;i<=n;i++){
		if(i<m){
			dp[i]=1;
		}else if(i==m){
			dp[i]=2;
		}else{
			dp[i]+=dp[i-1]+dp[i-m];
		}
	}
	return dp[n];
}
int32_t main(){
	qubais_judge;
	IOS;
	int n,m;
	cin>>n>>m;
	cout<<ans(n,m)<<endl;	
	return 0;   
}