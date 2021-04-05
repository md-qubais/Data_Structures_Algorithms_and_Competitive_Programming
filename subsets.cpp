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
    int arr[]={1,2,3,4,5};
    int n=pow(2,5)-1;
//Or here we can also write (int n=1<<n)(1*2power(n));
    for(int i=1;i<=n;i++){

        for(int j=0;j<n;j++){
        
                  if(i&(1<<j)){
                  cout<<arr[j]<<" ";
                  }
        }
        cout<<endl;
        
    }
    return 0;     
}