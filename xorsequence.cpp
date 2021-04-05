#include<bits/stdc++.h>
using namespace std;
long x(long i){
if(i==0){
return 0;
}
return x(i-1)^i;
}
long xorSequence(long l, long r) {
long ans=0;
for(long i=l;i<=r;i++){
ans=ans^(x(i));
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
    long n;
    cin>>n;
    while(n>0){
    n--;
    long left,right;
    cin>>left>>right;
    cout<<xorSequence(left,right)<<endl;
    }
    return 0; 
   
}
