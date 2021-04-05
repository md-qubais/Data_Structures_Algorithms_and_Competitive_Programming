#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={1,0};
    int n=pow(2,2)-1;
  
    for(int i=1;i<=n;i++){  	
        int mask=i;
      	int j=0;
        while(mask>0){
      if(mask&1){  
      	cout<<arr[j]<<" ";        
      }
        j++;
       mask=mask>>1;
       }  
       cout<<endl; 
    }
    return 0;     
}