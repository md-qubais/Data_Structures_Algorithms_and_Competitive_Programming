#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void all_indices(int *arr,int i,int n,int k){
	if(i==n){
		return;
	}
	if(arr[i]==k){
		cout<<i<<" ";
	}
	all_indices(arr,i+1,n,k);

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
	all_indices(arr,0,n,k);
	cout<<endl;
	return 0;   
}