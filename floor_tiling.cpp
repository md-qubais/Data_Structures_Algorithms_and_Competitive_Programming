#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int dp[100]={0};
int filled(int n){
	if(n==0){
		return 1;
	}
	if(n==1){
		return 1;
	}
	if(n==2){
		return n;
	}
	if(dp[n]!=0){
		return dp[n];
	}
	dp[n]=2*filled(n-1)+filled(n-3);
	return dp[n];
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	cout<<filled(n)<<endl;
	return 0;   
}