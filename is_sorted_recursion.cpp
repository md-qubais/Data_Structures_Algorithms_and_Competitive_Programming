#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool is_sorted(int *arr,int n,int i){
	if(i==n-1){
		return true;
	}
	if(arr[i]>arr[i+1]){
		return false;
	}
	return is_sorted(arr,n,i+1);

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
	if(is_sorted(arr,n,0)){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	return 0;   
}