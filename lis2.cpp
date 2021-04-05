#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int lis2(int *arr,int i ,int n){
	int ans=0;
	if(i==n){
		return ans;
	}
	for(int i1=i+1;i1<n;i1++){
		if(arr[i1]>arr[i]){
			ans=max(ans,lis2(arr,i1,n));
		}
	}
	return ans+1;
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
	int ans=0;
	for(int i=0;i<n;i++){
		ans=max(ans,lis2(arr,i,n,arr[i]));
	}
	cout<<ans<<endl;
	return 0;   
}