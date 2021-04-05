#include<bits/stdc++.h>
using namespace std;
int no_of_ways(int n,int m){
if(n==m){
return 2;
}
if(n<m){
return 1;
}
return 1+no_of_ways(n-m,m-1);
}
int main() 
{
	  #ifndef qubais_judge
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	  #endif
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int n,m;
      cin>>n>>m;
      cout<<no_of_ways(n,m);
      return 0;
}