#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool is(int *arr,int i,int n){
	if(i==n){
		return true;
	}
	if(arr[i]>arr[i+1]){
		return false;
	}
	return is(arr,i+1,n);
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
	if(is(arr,0,n-1)){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	return 0;   
}