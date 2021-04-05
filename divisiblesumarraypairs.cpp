#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    
    int i=0,j=i+1;
    int sum=0;
    while(i<n-1){
    
      if((arr[i]+arr[j])%key==0){
       sum++;
      }j++;
      if(j>n-1){
        i++;
        j=i+1;
       
      }
    }  
    cout<<sum<<endl; 
        return 0;
}