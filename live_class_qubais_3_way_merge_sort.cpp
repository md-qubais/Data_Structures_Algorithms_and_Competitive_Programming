#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void merge2(int *arr,int *a,int *b,int s,int e){
	//to do code here
	int mid=(s+e)/2;
	int k=e;
	int i=mid;
	int j=e;
	while(i>=s and j>=mid+1){
		if(a[i]>b[j]){
			arr[k--]=a[i--];
		}else{
			arr[k--]=b[j--];
		}
	}
	while(i>=s){
		arr[k--]=a[i--];
	}
	while(j>=mid+1){
		arr[k--]=b[j--];
	}


	//now we have to retreat the elements back 
	//in the given that list or an array
	for(int i=s;i<=mid;i++){
		a[i]=arr[i];
	}
	for(int i=mid+1;i<=e;i++){
		b[i]=arr[i];
	}
}


void merge_sort2(int *arr,int s,int e){
	//to do code here
	if(s>=e){
		return ;
	}
	int mid=(s+e)/2;
	int a[1000];
	int b[1000];
	for(int i=s;i<=mid;i++){
		a[i]=arr[i];
	}
	for(int i=mid+1;i<=e;i++){
		b[i]=arr[i];
	}
	merge_sort2(a,s,mid);
	merge_sort2(b,mid+1,e);
	merge2(arr,a,b,s,e);
}


void merge1(int *arr,int s,int e){
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=0;
	int ans[100000];
	while(i<=mid and j<=e){
		if(arr[i]<arr[j]){
			ans[k++]=arr[i++];
		}else{
			ans[k++]=arr[j++];
		}
	}
	while(i<=mid){
		ans[k++]=arr[i++];
	}
	while(j<=e){
		ans[k++]=arr[j++];
	}
	//after sorting we are inserting it to 
	//back in the original array
	k=0;
	for(int i=s;i<=e;i++){
		arr[i]=ans[k++];
	}
}

void merge_sort1(int *arr,int s,int e){
	if(s>=e){
		return;
	}
	int mid=(s+e)/2;
	merge_sort1(arr,s,mid);
	merge_sort1(arr,mid+1,e);
	merge1(arr,s,e);
}
void print(int *arr,int num){
	for(int i=0;i<=num;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

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
	merge_sort2(arr,0,num-1);
	print(arr,num-1);
	return 0;   
}