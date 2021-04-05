#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int coin_change(int *arr,int n,int i,int amt,string path){
	if(amt<0){
		return 0;
	}
	if(amt==0){
		cout<<path<<endl;
		return 1;
	}
	int ans=0;
	for(int j=i;j<n;j++){
		if(arr[j]==0){
			continue;
		}
		if(amt-arr[j]<0){
			return ans;
		}
		ans=max(ans,coin_change(arr,n,j,amt-arr[j],path+to_string(arr[j])));
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
	int amt;
	cin>>amt;
	cout<<coin_change(arr,n,0,amt,"")<<endl;
	return 0;   
}