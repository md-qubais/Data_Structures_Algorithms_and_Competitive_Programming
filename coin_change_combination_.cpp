#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int coin_change(int *arr,int n,int i,int tar){
	if(tar<0){
		return 0;
	}

	if(i>=n){
		if(tar==0){
			return 1;
		}
		return 0;
	}

	if(tar==0){
		return 1;
	}
	int ans2=coin_change(arr,n,i,tar-arr[i]);
	int ans1=coin_change(arr,n,i+1,tar);
	return ans1+ans2;
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
	cout<<coin_change(arr,n,0,tar);
	return 0;   
}