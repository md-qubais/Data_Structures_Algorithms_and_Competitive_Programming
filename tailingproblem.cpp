#include<bits/stdc++.h>
using namespace std;
int no_of_ways(int n){
if(n<=3){
return 1;
}
return no_of_ways(n-1)+no_of_ways(n-4);
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
      cout<<no_of_ways(num);
      return 0;
}