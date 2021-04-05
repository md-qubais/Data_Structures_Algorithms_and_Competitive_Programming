#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
int add_digits(int num){
if(num<10){
return num;
}
int sum=0;
while(num>0){
sum=sum+(num%10);
num=num/10;
}
return add_digits(sum);
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
	cout<<add_digits(num)<<endl;
	return 0;     
}