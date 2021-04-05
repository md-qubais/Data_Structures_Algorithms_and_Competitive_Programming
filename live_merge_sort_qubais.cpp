#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void merge(int *arr,int s,int e){
	int mid=(s+e)/2;
	int ans[100000];
	int k=0;
	int i=s;
	int j=mid+1;
	while(i<=mid and j<=e){
		if(arr[i]>arr[j]){
			ans[k++]=arr[j++];
		}else{
			ans[k++]=arr[i++];
		}
	}
	while(i<=mid){
		ans[k++]=arr[i++];
	}
	while(j<=e){
		ans[k++]=arr[j++];
	}
	k=0;
	for(int i=s;i<=e;i++){
		arr[i]=ans[k++];
	}
}
void merge_sort(int *arr,int s,int e){
	if(s>=e){
		return ;
	}
	int mid=(s+e)/2;
	merge_sort(arr,s,mid);
	merge_sort(arr,mid+1,e);
	merge(arr,s,e);
}



int32_t main(){
	qubais_judge;
	IOS;	
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	merge_sort(arr,0,num-1);
	for(int i=0;i<num;i++){
		cout<<arr[i]<<" ";
	}
	return 0;   
}