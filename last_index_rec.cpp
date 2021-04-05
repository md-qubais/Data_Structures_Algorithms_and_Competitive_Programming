#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int last_index(int *arr,int n,int k){
	if(n<0){
		return -1;
	}
	if(arr[n]==k){
		return n;
	}
	return last_index(arr,n-1,k);

}
int32_t main(){
	qubais_judge;
	IOS;	
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}	
	int k;
	cin>>k;
	cout<<last_index(arr,num-1,k)<<endl;
	return 0;   
}