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
    int n;
    int count=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n>0){
    int num=n%10;

    n=n/10;
    count+=num;
    }
    printf("%d",count);    
    return 0;
}