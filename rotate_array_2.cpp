#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
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
	k=k%n;
	if(k<0){
		k=k+n;
	}
	int i=n-k;
	int ans[n];
	int j=0;
	while(i<n){
		ans[j++]=arr[i++];
	}
	i=0;
	while(i<=n-k-1){
		ans[j++]=arr[i++];
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	rotate(ans,arr+k,arr+n);
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	return 0;   
}