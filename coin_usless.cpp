#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int coin(int *arr,int n,int tar){
	int dp[tar+1]={0};
	dp[0]=1;
	for(int i=0;i<n;i++){
		for(int j=arr[i];j<=tar;j++){
			dp[j]=dp[j]+dp[j-arr[i]];
		}
	}
	return dp[tar];
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
	int tar;
	cin>>tar;
	cout<<coin(arr,n,tar)<<endl;
	return 0;   
}