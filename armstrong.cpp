#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	int sum=0;
	int num1=num;
	int n=0;
	while(num1>0){
     n++;
     num1=num1/10;
	}
	num1=num;
	while(num>0){
		sum=sum+pow(num%10,n);
           num=num/10;
	} 
      if(num1==sum){
      	cout<<"true"<<endl;
      }else{
      	cout<<"false"<<endl;
      }
	return 0;     
}