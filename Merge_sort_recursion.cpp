#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8,10};
    int n1=sizeof(a)/sizeof(int);
    int n2=sizeof(b)/sizeof(int);
    int i=0,j=0,k=0;
    int arr[n1+n2];
    while(i<n1&&j<n2){
          if(a[i]<b[j]){
              arr[k++]=a[i++];
          
          }else{
          	arr[k++]=b[j++];
          	
          }
    }
    while(i<n1){
          i++;
    }
    while(j<n2){
          j++;
    }

    for(int i=0;i<n1+n2;i++){
    cout<<arr[i]<<" ";
    }
	return 0;
}