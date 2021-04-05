#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int key;
    cin>>key;
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
     int j=i+1;
     int k=n-1;
     while(j<k){

     if(arr[i]+arr[j]+arr[k]==key){
     cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
     j++;
     k=n-1;
     }else if(arr[i]+arr[j]+arr[k]>key){
          k--;
     }else{
     j++;
     }
     }
    }
    return 0;
}