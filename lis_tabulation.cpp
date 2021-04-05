#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int lis_tab(int *arr,int n){
	int dp[n]={0};
	int ans=0;
	dp[0]=1;
	ans=1;
	for(int i=1;i<n;i++){
		int m=0;
		for(int j=i-1;j>=0;j--){
			if(arr[i]>arr[j]){
			m=max(m,dp[j]);
		}
	}
		dp[i]=m+1;
		ans=max(ans,dp[i]);
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<lis_tab(arr,n)<<endl;
	return 0;   
}