#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   

int partition(int *arr,int s,int e){

int pivot=arr[e];
int i=s-1,j=s;
for(;j<=e-1;){
if(arr[j]<=pivot){
i++;
swap(arr[i],arr[j]);
}
j++;

}
swap(arr[i+1],arr[e]);
return i+1;
}




void quicksort(int *arr,int s,int e){
if(s>e){
return ;
}
int p=partition(arr,s,e);
quicksort(arr,s,p-1);
quicksort(arr,p+1,e);
}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
    cin>>arr[i];
    }
    quicksort(arr,0,num-1);
   for(int i=0;i<num;i++){
   cout<<arr[i]<<" ";
   }
	return 0;     
}