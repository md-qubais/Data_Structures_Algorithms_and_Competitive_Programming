#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


int dp[100000]={0};
int get_min(int arr[],int i,int n,int ans){
	if(i>=n){
		if(i==n){
			if(dp[i]==0){
				dp[i]=INT_MAX;
			}
			return min(ans,dp[i]);
		}
		return ans;
	}
	if(arr[i]==0){
		return INT_MAX;
	}
	if(dp[i]==0){
		dp[i]=INT_MAX;
	}
	for(int j=arr[i];j>=1;j--){
		dp[i]=min(get_min(arr,i+j,n,ans+1),dp[i]);
		
	}
	return dp[i];
}



int minJumps(int arr[], int n){
    return get_min(arr,0,n,0);
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
	cout<<minJumps(arr,n-1);
	return 0;
}