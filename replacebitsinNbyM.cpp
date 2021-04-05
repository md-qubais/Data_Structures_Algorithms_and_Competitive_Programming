#include<bits/stdc++.h>
#define ll      long long
using namespace std;   

int rangeclear(int n,int i,int j){
int a=(~0)<<j+1;
int mask=(~0)<<i;
int b=~mask;
int mask1=a|b;
int num=n&mask1;
return num;
}

int replacebits(int n,int m,int i,int j){
	int n_=rangeclear(n,i,j);
	m=m<<i;
	return n_|m;
}

int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=15;
    int i=2,j=3;
    int m=2;
   cout<<replacebits(15,2,1,3);
    return 0; 
}