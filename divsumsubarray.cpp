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
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int pre[n];
    int sum=0;
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
    pre[i]=pre[i-1]+arr[i];
    }
  
    for(int i=0;i<n;i++){
    	for(int j=i;j<n;j++){
        if(j==0){
           if(pre[j]%n==0){
             sum++;
           }
        }
        else{
        	if((pre[j]-pre[i-1])%n==0){
               sum++;
       	}
      }
   	}
   } 
   cout<<"answer:"<<sum<<endl;
    return 0;
}