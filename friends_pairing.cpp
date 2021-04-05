#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int dp[100]={0};
int Pair(int n){
	if(n==1){
		return 1;
	}
	if(n==2){
		return 2;
	}
	if(n==3){
		return 4;
	}
	if(dp[n]!=0){
		return dp[n];
	}
	dp[n]=Pair(n-1)+(n-1)*Pair(n-2);
	return dp[n];
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	cout<<Pair(n)<<endl;
	return 0;   
}