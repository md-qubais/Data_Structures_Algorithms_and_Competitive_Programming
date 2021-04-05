#include<bits/stdc++.h>
using namespace std;
int countbits(int n){
int ans=0;
while(n>0){
ans+=n&1;
n=n>>1;
}
return ans;
}
int countbitsfast(int n){
int ans=0;
while(n>0){
n=n&(n-1);
ans++;
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
    int num;
    cin>>num;
    cout<<countbits(num)<<endl;
    cout<<countbitsfast(num)<<endl;
    cout<<__builtin_popcount(num)<<endl;
    
   return 0;
}