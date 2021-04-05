#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int lbs(int *arr,int n){
	int ans1=0;
	int dp1[n]={0};
	int dp2[n]={0};
	dp1[0]=1;
	ans1=1;
	for(int i=1;i<n;i++){
		int m=0;
		for(int j=i-1;j>=0;j--){
			if(arr[i]>arr[j]){
			m=max(m,dp1[j]);
		}
	}
		dp1[i]=m+1;
		ans1=max(ans1,dp1[i]);
	}
	int ans2=0;
	ans2=1;
	dp2[n-1]=1;
	for(int i=n-2;i>=0;i--){
		int m=0;
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
			m=max(m,dp2[j]);
		}
	}
		dp2[i]=m+1;
		ans2=max(ans2,dp2[i]);
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans=max(ans,dp1[i]+dp2[i]-1);
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
	cout<<lbs(arr,n)<<endl;
	return 0;   
}