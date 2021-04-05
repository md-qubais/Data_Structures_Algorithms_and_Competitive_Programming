#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
ll gcd(ll a,ll b){
return b==0?a:gcd(b,a%b);
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;     
}