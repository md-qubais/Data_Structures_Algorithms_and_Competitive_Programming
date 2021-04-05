#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int maxSubarraySum(int arr[], int n){
	int ans=INT_MIN;
	int max_so=0;
	for(int i=0;i<n;i++){
		max_so+=arr[i];
		ans=max(max_so,ans);
		if(max_so<0){
			max_so=0;
		}
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
	cout<<maxSubarraySum(arr,n);
	return 0;
}
