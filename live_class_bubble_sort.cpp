#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

void bubble_sort_sir(int *arr,int n,int i,int j){
	if(i==n-1){
		return ;
	}
	if(j==n-1-i){
		bubble_sort_sir(arr,n,i+1,0);
		return;
	}else{
		if(arr[j]>arr[j+1]){
		swap(arr[j],arr[j+1]);
	}
		bubble_sort_sir(arr,n,i,j+1);
	}
	bubble_sort_sir(arr,n,i+1,0);
}

void bubble_sort(int *arr,int n,int i,int j){
	if(j==n-1-i){
		return;
	}
	if(i==n-1){
		return;
	}
	if(arr[j]>arr[j+1]){
		swap(arr[j],arr[j+1]);
	}
	bubble_sort(arr,n,i,j+1);
	bubble_sort(arr,n,i+1,j);
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
	bubble_sort_sir(arr,n,0,0);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;   
}