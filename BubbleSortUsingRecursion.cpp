#include<bits/stdc++.h>
#define ll      long long
using namespace std;

void bubble_sort_recursive(int *arr,int n){
if(n==1){
return ;
}
if(arr[0]>arr[1]){
swap(arr[0],arr[1]);
}
for(int i=0;i<n-1;i++){
if(arr[i]>arr[i+1]){
swap(arr[i],arr[i+1]);
}
}
bubble_sort_recursive(arr,n-1);
}



void bubble_sort_complete_recursive(int *arr,int n,int j){
if(j==n-1){
return ;
}
if(n==1){
return ;
}
if(arr[0]>arr[1]){
swap(arr[0],arr[1]);
}
bubble_sort_complete_recursive(arr+1,n,j+1);
bubble_sort_complete_recursive(arr,n-1,j);
}


int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    bubble_sort_complete_recursive(arr,n,0);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
    }
    return 0;     
}