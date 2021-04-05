#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
int fib(int num){
	if(num==0 ){
       return 0;
	}
	if(num==1){
      return 1;
	}
  return fib(num-2)+fib(num-1);
}
int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	cout<<fib(num)<<endl;
	return 0;     
}