#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "
"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int miss(int *arr,int n){
	int dp[n]={0};
	dp[0]=arr[0];
	int ans=0;
	vector<int> res;
	for(int i=1;i<n;i++){
		int m=0;
		int idx=-1;
		for(int j=i-1;j>=0;j--){
			if(dp[j]+arr[i]>=m and arr[i]>=arr[j]){
				m=dp[j]+arr[i];
				idx=j;
			}
	}
	if(idx!=-1)
	dp[i]=dp[idx]+arr[i];
else dp[i]=arr[i];
	}

	for(int i=0;i<n;i++){
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
	cout<<miss(arr,n)<<endl;
	return 0;   
}