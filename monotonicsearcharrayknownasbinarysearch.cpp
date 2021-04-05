#include<bits/stdc++.h>
using namespace std;
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    float l=0,h=n;
    float ans=-1;
    float mid;
    while(l<=h){

    mid=(l+h)/2;
    
    if(mid*mid==n){
    ans=mid;
    break;
    }
    else if(mid*mid>n){
     h=mid-1;
    }else{
     ans=mid;
     l=mid+1;
    }
    }
    int inc=0.1;
       for(int i=0;i<3;i++){
             while(ans*ans<=n){
             	
                  ans=ans+inc;
             }
             ans=ans-inc;
             inc=inc/10;
       }
       cout<<ans<<endl;
    return 0;
}