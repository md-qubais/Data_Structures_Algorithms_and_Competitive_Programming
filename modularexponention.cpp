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
    ll a,b,c;
    cin>>a>>b>>c;
    int res=1;
    int j=2;
    while(b>0){
     int mask=(b&1);
       if(mask){
        res=res*a;
      res=res%c;
       }
             a=a*a;
       b=b>>1;
    }
   cout<<res%c<<endl;
    return 0;     
}