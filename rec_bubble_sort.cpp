#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

void bubble_sort(int *arr,int i,int j,int n){
if(i==n){
	return;
}	
if(j==n-i){
	return;
}
if(arr[j]>arr[j+1]){
	swap(arr[j],arr[j+1]);
}
bubble_sort(arr,i,j+1,n);
bubble_sort(arr,i+1,0,n);
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
	bubble_sort(arr,0,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;   
}