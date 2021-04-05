#include<bits/stdc++.h>
#define ll      long long
using namespace std;
ll arr[10005],freq[10005];   
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    while(n>0){
    	n--;
    	ll num;
    	cin>>num;
     memset(freq,0,sizeof(freq));
     freq[0]=1;
     ll sum=0;
     for(int i=0;i<num;i++){
             cin>>arr[i];
             sum=sum+arr[i];
             sum%=num;
             sum=(sum+num)%num;//if negative
             freq[sum]++;
     }
     ll ans=0;
     for(int i=0;i<num;i++){
         ll ncr=freq[i];
   ans=ans+(ncr*(ncr-1)/2);
     }
     cout<<ans<<endl;
    }
    return 0;     
}