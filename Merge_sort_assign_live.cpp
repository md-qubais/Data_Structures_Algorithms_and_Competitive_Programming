#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void merge(int *arr,int *a,int *b,int s,int e){
int mid=(s+e)/2;
int i=s;
int j=mid+1;
int k=s;
while(i<=mid and j<=e){
	if(a[i]<b[j]){
		arr[k++]=a[i++];
	}else{
		arr[k++]=b[j++];
	}
}
while(i<=mid){
	arr[k++]=a[i++];
}
while(j<=e){
	arr[k++]=b[j++];
}
k=s;
for(int i=s;i<=mid;i++){
	a[i]=arr[k++];
}
for(int i=mid+1;i<=e;i++){
	b[i]=arr[k++];
}


}



void merge_sort(int *arr,int s,int e){
	if(s>=e){
		return;
	}
	int mid=(s+e)/2;
	int a[1000],b[1000];
	for(int i=s;i<=mid;i++){
		a[i]=arr[i];
	}
	for(int i=mid+1;i<=e;i++){
		b[i]=arr[i];
	}
	merge_sort(a,s,mid);
	merge_sort(b,mid+1,e);
	merge(arr,a,b,s,e);
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
	merge_sort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;   
}