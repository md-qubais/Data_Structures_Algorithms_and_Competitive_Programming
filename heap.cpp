#include<bits/stdc++.h>
using namespace std;

void insert(int *arr,int n){
int i=n;
int temp=arr[n];
while(i>1&&temp>arr[i/2]){
arr[i]=arr[i/2];
arr[i/2]=temp;
i=i/2;
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
	for(int i=2;i<=n;i++){
           insert(arr,i);
	}
	cout<<"now displaying the heap after inerting some elements to it"<<" this heap is known as the max heap"<<endl;
	for(int i=1;i<=n;i++){
      cout<<arr[i]<<" ";
	}
	return 0;
}