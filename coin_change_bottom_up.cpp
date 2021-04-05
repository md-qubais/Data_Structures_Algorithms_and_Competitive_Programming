#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int coinChange(vector<int>& coins, int amount){
	int dp[amount+1]={0};
	dp[0]=0;
	for(int rs=1;rs<=amount;rs++){
		for(int i=1;i<coins.size();i++){
			
		}
	}
	if(dp[amount]==0){
		return -1;
	}
	return dp[amount];
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<int> coins(n);
	for(int i=0;i<n;i++){
		cin>>coins[i];
	}
	int amount;
	cin>>amount;
	cout<<coinChange(coins,amount)<<endl;
	return 0;   
}