#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
bool islesser(ll int n,ll int k,ll int x){
if(pow(x,k)<=n){
return true;
}
return false;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    while(num>0){
    num--;
    long long int n,k;
    cin>>n>>k;
    long long int s=0;
    long long int e=n;
    long long int ans=0;
    while(s<=e){
        long long int mid=(s+e)/2;
         if(islesser(n,k,mid)){
           s=mid+1;
           ans=mid;
         }else{
              e=mid-1;
         }
    }


    cout<<ans<<endl; 
    }
  

    return 0;    
}