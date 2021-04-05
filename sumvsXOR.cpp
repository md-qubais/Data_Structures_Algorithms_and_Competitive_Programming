
#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
//simple math trick 
//the number of zeroes present in n
//count the number of zeroes present in n
//and assign the sum as the power of 2 to number of zeroes in n
long sumXor(long n) {
long sum=0;
for(int i=0;i<=n;i++){
if(n+i==(n^i)){
sum++;
}
}
return sum;
}

int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long num;
    cin>>num;
    cout<<sumXor(num)<<endl;
    return 0; 
}