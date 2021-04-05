#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int longestSubsequence(vector<int>& arr, int diff){
	/*
	//so here in the below answer we are getting tle
	int dp[100]={0};//while submitting the solution
	//you should change the size of dp to 1000000
	dp[0]=1;
	for(int i=1;i<arr.size();i++){
		int m=0;
		for(int j=i-1;j>=0;j--){
			if(arr[i]-arr[j]==diff){
				m=max(m,dp[j]);
			}
		}
		dp[i]=m+1;
	}
	int ans=0;
	for(int i=0;i<arr.size();i++){
		ans=max(ans,dp[i]);
	}
	return ans;*/
	unordered_map<int,int> dp;
	for(int i=0;i<arr.size();i++){
		if(dp[arr[i]-diff]!=0){
			dp[arr[i]]=dp[arr[i]-diff]+1;
		}else{
			dp[arr[i]]=1;
		}
	}
	int ans=0;
	for(auto it:dp){
		ans=max(ans,it.second);
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int diff;
	cin>>diff;
	cout<<longestSubsequence(v,diff);
    return 0;
}