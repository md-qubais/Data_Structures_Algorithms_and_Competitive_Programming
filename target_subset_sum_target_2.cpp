#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool get(int *arr,int n,int k,int i){
	if(k==0){
		return true;
	}
	if(k<0){
		return false;
	}
	if(i==n){
		return false;
	}
	bool b1=get(arr,n,k-arr[i],i+1);
	if(b1){
		return true;
	}
	bool b2=get(arr,n,k,i+1);
	if(b2){
		return true;
	}
	return false;
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
	if(get(arr,n,k,0)) cout<<"true"<<endl;
	else cout<<"false"<<endl;
	return 0;   
}