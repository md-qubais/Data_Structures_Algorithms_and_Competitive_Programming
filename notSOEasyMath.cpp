//we have to find the total numbers of no's that is 
//which is divisible by any prime number less that 20
//till N
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
    int t;
    cin>>t;
      int primes[]={2,3,5,7,11,13,17,19};
   
    while(t){
    	t--;
     int n;
     cin>>n;
     int subsets=(1<<8)-1;
     int ans=0;
     for(int i=1;i<=subsets;i++){
     int denom=1;
     int setbits=__builtin_popcount(i);
     for(int j=0;j<8;j++){
     if(i&(1<<j)){
            denom=denom*primes[j];
     }
     }
     if(1&setbits){
       ans+=n/denom;
     }else{
     	ans-=n/denom;
     }
     }
    cout<<ans<<endl;
    }

    return 0;     
}