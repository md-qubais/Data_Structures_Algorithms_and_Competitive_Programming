#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//did it with dynamic programming
//we just have to store their correspodance
//result in an array so later that we can process
//them and by using them
int dp[37]={0};
int stepPerms(int n) {
	if(n==0){
		return 1;
	}
	if(n==1){
		return 1;
	}
	if(n<0){
		return 0;
	}
	if(dp[n]!=0){
		return dp[n];
	}
	dp[n]=(stepPerms(n-1)%10000000007)+(stepPerms(n-2)%10000000007)+(stepPerms(n-3)%10000000007);
	return dp[n];
}
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		cout<<stepPerms(num)<<endl;
	}
	return 0;   
}