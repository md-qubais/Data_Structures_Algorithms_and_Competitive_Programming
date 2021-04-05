#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
int fastexp(int a,int b){
int ans=1;
while(b>0){
int mask=(b&1);
if(mask){
ans*=a;
}
a=a*a;
b=b>>1;
}


return ans;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    int b;
    cin>>a>>b;
    cout<<fastexp(a,b)<<endl;
    return 0;
}