#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int dp[100]={0};
bool contains(string s){
	for(int i=0;i<s.length()-1;i++){
		if(s[i]=='0' and s[i+1]=='0'){
			return true;
		}
	}
	return false;
}
int count(int n){
	dp[0]=0;
	dp[1]=1;
	dp[2]=3;
	dp[3]=5;
	for(int i=4;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int ans=count(n);
	cout<<(ans*ans)<<endl;
	return 0;   
}