#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int *merge_sir(int *arr1,int n1,int *arr2,int n2){
	int *ans=new int [n1+n2];
	int i=n1-1;
	int j=n2-1;
	int k=n1+n2-1;
	while(i>=0 and j>=0){
		if(arr1[i]>arr2[j]){
			ans[k--]=arr1[i--];
		}else{
			ans[k--]=arr2[j--];
		}
	}
	while(i>=0){
		ans[k--]=arr1[i--];
	}
	while(j>=0){
		ans[k--]=arr2[j--];
	}
	return ans;

}



//how to merge two sorted arrays
//into a single array
//qubais code
int* merge_to_arrays(int *arr1,int n1,int *arr2,int n2){
	int *ans=new int[n1+n2];
	int k=0;
	int i=0,j=0;
	while(i<n1 and j<n2){
		if(arr1[i]<arr2[j]){
			ans[k++]=arr1[i++];
		}else{
			ans[k++]=arr2[j++];
		}
	}
	while(i<n1){
		ans[k++]=arr1[i++];
	}
	while(j<n2){
		ans[k++]=arr2[j++];
	}
	return ans;
}

void merge(int *arr,int *a,int *b,int s,int e){
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	while(i<=mid and  j<=e){
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
	//base case
    //if there is only one element
    if(s>=e){
    	return ;
    }


	//recursive case
	//diviede them
	int a[100],b[100];
	int mid=(s+e)/2;
	for(int i=s;i<=mid;i++){
		a[i]=arr[i];
	}
	for(int i=mid+1;i<=e;i++){
		b[i]=arr[i];
	}
    //sort
    merge_sort(a,s,mid);
    merge_sort(b,mid+1,e);
    //merge
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
	return 0;   
}