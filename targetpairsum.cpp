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


    int i=0,j=n-1;
    while(i<j){
     if(arr[i]+arr[j]==key){
     cout<<arr[i]<<" and "<<arr[j]<<endl;
     i++;
     j=n-1;
     }
     else if(arr[i]+arr[j]>key){
     j--;
     }else{
     	i++;
     }
    }


return 0;
}