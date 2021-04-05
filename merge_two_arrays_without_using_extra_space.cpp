#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
void merge_two_sorted_arrays(int *arr,int *brr,int n1,int n2){
int i=0,j=0;
while(i<n1 and j<n2){
if(arr[i]>=brr[j]){
swap(arr[i],brr[j]);
if(j==0){
if(brr[j]>brr[j+1]){
sort(brr,brr+n2);
}
}
else if(j<n2-1){
if(brr[j]>brr[j+1] or brr[j]<brr[j-1]){
sort(brr,brr+n2);
}
}
i++;
}
else j++;
}
}



int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int n;
	cin>>n;
	while(n--){
      int n1,n2;
      cin>>n1>>n2;
      int arr[n1],brr[n2];
      for(int i=0;i<n1;i++){
        cin>>arr[i];
      }
      for(int i=0;i<n2;i++){
      	cin>>brr[i];
      }
      merge_two_sorted_arrays(arr,brr,n1,n2);
      for(int i=0;i<n1;i++){
        cout<<arr[i]<<" ";
      }
      for(int i=0;i<n2;i++){
        cout<<brr[i]<<" ";
      }
      cout<<endl;
	}
	return 0;     
}