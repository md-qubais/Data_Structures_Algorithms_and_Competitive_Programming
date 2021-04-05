#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;  




void counting_sort(int *arr,int n){
int largest=-1;
for(int i=0;i<n;i++){
largest=max(largest,arr[i]);
}
int *freq=new int[largest+1]{0};
for(int i=0;i<n;i++){
freq[arr[i]]++;
}
int i=0,j=0;
while(i<largest+1){
if(freq[i]>0){
arr[j++]=i;
freq[i]--;
}else{
	i++;
}
}
}





void count_sort(int *arr,int n){
int largest=-1;
for(int i=0;i<n;i++){
largest=max(largest,arr[i]);
}
int *freq=new int[largest+1]{0};
for(int i=0;i<n;i++){
freq[arr[i]]++;
}
int j=0;
for(int i=0;i<largest+1;i++){
while(freq[i]>0){
arr[j++]=i;
freq[i]--;
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
	int n=12;
	int arr[]={9,9,9,8,8,7,6,5,4,3,2,1};
	count_sort_tech(arr,n);
	for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
	}
	return 0;     
}