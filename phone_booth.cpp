#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool solve(int *arr,int n,int i,int k){
	if(i==n){
		return false;
	}
	if(k==0){
		return true;
	}
	if(arr[i]==1){
		return solve(arr,n,i+1,k);
	}
	if(arr[i-1]==0 and arr[i+1]==0){
		return solve(arr,n,i+1,k-1);
	}
	return solve(arr,n,i+1,k);
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
	int k;
	cin>>k;
	if(solve(arr,n,0,k)){
		cout<<"true"<<endl;
	}else cout<<"false"<<endl;
    return 0;
}