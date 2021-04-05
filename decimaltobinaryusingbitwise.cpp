#include<bits/stdc++.h>
#define ll      long long
using namespace std;  
int decimaltobinary1(int n){
int ans=0;
int p=1;
while(n>0){
	int last=(n&1);
ans=ans+p*last;
p=p*10;
n=n>>1;
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
    cout<<decimaltobinary1(num)<<endl;
    return 0;
} 
