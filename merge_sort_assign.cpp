#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;  


void merge(int *arr,int s,int mid,int e){
int i=s,j=mid+1,k=0;
int temp[e+1];
while(i<=mid and j<=e){
if(arr[i]<arr[j]){
temp[k++]=arr[i++];
}else temp[k++]=arr[j++];
}

while(i<=mid){
temp[k++]=arr[i++];
}

while(j<=e){
temp[k++]=arr[j++];
}

k=0;
for(int l=s;l<=e;l++){
arr[l]=temp[k++];
}


}


void mergesort(int *arr,int s,int e){
if(s==e){
return ;
}
int mid=(s+e)/2;
mergesort(arr,s,mid);
mergesort(arr,mid+1,e);
merge(arr,s,mid,e);
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
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
	}
	return 0;     
}