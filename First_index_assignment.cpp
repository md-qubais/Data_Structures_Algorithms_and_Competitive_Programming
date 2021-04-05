#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
static int i=0;
int find_first(int *arr,int n,int k){
	if(i>n){
		return -1;
	}
	if(arr[i]==k){
		return i;
	}
	i++;
	return find_first(arr,n,k);
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
	cout<<find_first(arr,n-1,k)<<endl;
	return 0;   
}