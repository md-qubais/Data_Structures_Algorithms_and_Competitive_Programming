#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void selection(int *arr,int n,int i,int j,int min){
	if(i>=n){
		return;
	}
	if(j>n){
			swap(arr[i],arr[min]);
			selection(arr,n,i+1,i+2,i+1);
			return;
		
	}
	if(arr[min]>arr[j]){
		min=j;
	}
	selection(arr,n,i,j+1,min);

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
	selection(arr,n-1,0,0,0);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;   
}