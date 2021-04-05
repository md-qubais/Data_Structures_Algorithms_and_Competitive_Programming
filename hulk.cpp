#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
//the answer of the solution is that
//there here it is that the number of the set bits
//how many set bits that are present in the number
//N that is the answer for this question
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
    while(n>0){
    n--;
    int num;
    cin>>num;
    cout<<__builtin_popcount(num)<<endl;
    }
    return 0;     
}