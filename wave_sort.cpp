#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
void wave_coded_qubais_sort(int *arr,int n){
int j=0;
while(j<n-1){
if(j==n-2){
if(arr[j]<arr[j+1]){
swap(arr[j],arr[j+1]);
}
j++;
}else if(j==0){
if(arr[j]<arr[j+1]){
swap(arr[j+1],arr[j]);
}
j=j+2;
}else{
if(arr[j]<arr[j-1]){
swap(arr[j],arr[j-1]);
}
if(arr[j]<arr[j+1]){
swap(arr[j],arr[j+1]);
}
j=j+2;
}
}
}


void wave_sort_shift(int *arr,int n){
sort(arr,arr+n);
for(int i=0;i<=n-1;i=i+2){
swap(arr[i],arr[i+1]);
}
}


void wave_sort(int *arr,int n){
for(int i=0;i<n-1;i=i+2){
	
if(i!=0 and arr[i]<arr[i-1]){
swap(arr[i],arr[i-1]);
}
if(i!=(n-1) and arr[i]<arr[i+1]){
swap(arr[i],arr[i+1]);
}

}


}



int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//wave_sort(arr,n);
	//wave_sort_shift(arr,n);
	wave_coded_qubais_sort(arr,n);
	for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
	}
	return 0;     
}