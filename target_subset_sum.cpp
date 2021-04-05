#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool get(int *arr,int i,int k){
	int sum=-1;
	for(int j=0;j<i;j++){
		sum+=arr[j];
	}
	if(sum==-1 or sum!=k){
		return false;
	}
	return true;
}
bool ans(int *arr,int *out,int n,int k,int i,int j){
	if(j==n){
		for(int i1=0;i1<i;i1++){
			cout<<out[i1]<<" ";			 
		}
		cout<<endl;
		if(get(out,i,k)){
			return true;
		}
		return false;
	}
	out[i]=arr[j];
	bool b1=ans(arr,out,n,k,i+1,j+1);
	if(b1==true){
		return true;
	}
	bool b2=ans(arr,out,n,k,i,j+1);
	if( b2){
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
	int out[n]={0};
	if(ans(arr,out,n,k,0,0)) cout<<"true"<<endl;
	else cout<<"false"<<endl;
	return 0;   
}