#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;


void dnf_sort(int *arr,int n){
int l=0;
int h=n-1;
int mid=0;
while(mid<=h){
if(arr[mid]==0){
swap(arr[mid],arr[l]);
l++;
mid++;
}
if(arr[mid]==1){
mid++;
}
if(arr[mid]==2){
swap(arr[mid],arr[h]);
h--;
}
}
}


void sort_0_1_2(int *arr,int n){
int i=-1,j=0,k=n-1;
while(j<k){
if(arr[j]==0){
	i=i+1;
swap(arr[i],arr[j]);
}else if(arr[j]==2){
	k=k-1;
swap(arr[k],arr[j]);

}else{
	j++;
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
	int arr[]={1,0,0,0,2,2,2,1,1,1,0,0,0,1,2,1,2,0,1,2,0,1,2,0,1,2,0,0,0,1,1,1,1,2,2,2,2,};
	int n=sizeof(arr)/sizeof(int);
	dnf_sort(arr,n);
	//sort_0_1_2(arr,n);
	for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
	}
	return 0;     
}