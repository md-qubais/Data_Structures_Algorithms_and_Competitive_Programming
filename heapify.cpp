#include<bits/stdc++.h>
using namespace std;
void heapify(int *arr,int n){
for(int i=n-1;i>1;i--){
if(arr[i/2]<arr[i]){
int temp=arr[i];
arr[i]=arr[i/2];
arr[i/2]=temp;
}
}
}
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
    cin>>arr[i];
    }
    heapify(arr,n);
    for(int i=1;i<=n;i++){
cout<<arr[i]<<endl;
    }
	return 0;
}