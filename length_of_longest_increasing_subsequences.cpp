#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int lengthOfLIS(vector<int>& nums,int k){
	int dp[100]={0};
	dp[0]=1;
	for(int i=1;i<nums.size();i++){
		int n=0;
		for(int j=i-1;j>=0;j--){
			if(nums[i]-nums[j]==k){
				n=max(n,dp[j]);
			}
		}
		dp[i]=n+1;
	}
	int ans=0;
	for(int i=0;i<nums.size();i++){
		ans=max(ans,dp[i]);
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
	int k;
	cin>>k;
	cout<<lengthOfLIS(v,k)<<endl;
    return 0;
}