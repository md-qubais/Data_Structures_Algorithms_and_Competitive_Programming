#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
int getpivot(int *arr,int n){
int s=0;
int e=n-1;
int pivotmax=INT_MIN;
int pivot;
while(s<=e){
int mid=(s+e)/2;
if(arr[s]<=arr[mid]){
	if(arr[mid]>=pivotmax){
       pivotmax=arr[mid];
       pivot=mid;
	}
s=mid+1;
}else{
if(arr[mid]<=arr[e]){
if(arr[mid]>=pivotmax){
       pivotmax=arr[mid];
       pivot=mid;
	}
e=mid-1;
}
else{
	if(arr[mid]>=pivotmax){
       pivotmax=arr[mid];
       pivot=mid;
	}
	s=mid+1;
}
}
}
return pivot;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
     cin>>arr[i];
    }
    cout<<getpivot(arr,num)<<endl;
    return 0;
}