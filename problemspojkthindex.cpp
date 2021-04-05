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
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    for(ll i=0;i<n;i++){
    cin>>arr[i];
    }
    ll queries[q][4];
    for(ll i=0;i<q;i++){
    	for(ll j=0;j<4;j++){
       cin>>queries[i][j];
    	}
    }
    for(ll i=0;i<q;i++){
    	int occur=0;
    	bool  b=false;
    for(ll j=queries[i][0]-1;j<=queries[i][1]-1;j++){
        if(arr[j]==queries[i][2]){
              occur++;
              
        }

        if(occur==queries[i][3]){
        	b=true;

             cout<<j+1<<endl;
             break;
                     }

    }
    if(b==false){
     cout<<-1<<endl;
        }
    }

    return 0; 
    
}