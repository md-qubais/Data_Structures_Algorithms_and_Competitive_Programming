#include<bits/stdc++.h>
using namespace std;
void selection_sort(int *arr,int n){
for(int i=0;i<n-1;i++){
	int min_index=i;
	for(int j=i+1;j<n;j++){
      if(arr[j]<arr[min_index]){
             min_index=j;
      }
	}
	swap(arr[i],arr[min_index]);
}
}
bool compare(int a,int b){
return a<b;
}

void bubble_sort(int *arr,int n,bool (&comp)(int a,int b)){
for(int i=0;i<n-1;i++){
	for(int j=0;j<n-1-i;j++){
       if(compare(arr[j],arr[j+1])){
            swap(arr[j],arr[j+1]);
       }
	}
}
}


void insertion_sort(int *arr,int n){
for(int i=1;i<n;i++){
int temp=arr[i];
int j=i-1;
while(j>=0 and temp<arr[j]){
arr[j+1]=arr[j];
j--;
}
arr[j+1]=temp;
}
}


void kadanes_algo(){
int n;
cin>>n;

int arr[n];
int csum=0,msum=0;
for(int i=0;i<n;i++){
cin>>arr[i];
csum+=arr[i];
if(csum<0){
	csum=0;
}
msum=max(csum,msum);
}
cout<<msum<<endl;
}

int main(){
	#ifndef qubais_judge	
	freopen("output.txt","w",stdout);
	freopen("input.txt","r",stdin);
	#endif
	kadanes_algo();
	return 0;
}