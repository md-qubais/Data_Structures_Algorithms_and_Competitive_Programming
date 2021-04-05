#include<bits/stdc++.h>
#define ll      long long
using namespace std;


void merge(int *arr,int s,int e){
int mid=(s+e)/2;
int temp[e];
int i=s,j=mid+1,k=0;
while(i<=mid&&j<=e){
if(arr[i]<arr[j]){
temp[k++]=arr[i++];
}else{
	temp[k++]=arr[j++];
}
}
while(i<=mid){
temp[k++]=arr[i++];
}
while(j<=e){
temp[k++]=arr[j++];
}
k=0;
for(int i=s;i<=e;i++){
arr[i]=temp[k++];
}
}




void MergeSort(int *arr,int s,int e){
if(s==e){
return ;
}
int mid=(s+e)/2;
MergeSort(arr,s,mid);
MergeSort(arr,mid+1,e);
merge(arr,s,e);
}



int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    int num=sizeof(arr)/sizeof(int);
    MergeSort(arr,0,num-1);
    for(int i=0;i<num;i++){
    cout<<arr[i]<<" ";
    }

    return 0;     
}