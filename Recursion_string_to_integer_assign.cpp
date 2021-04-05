#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
int string_to_int(string str,int i,int &num){
if(i==str.length()){
return num;
}
num=num*10+(str[i]-'0');
return string_to_int(str,i+1,num);
}
int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	string str;
	cin>>str;
	int num=0;
	cout<<string_to_int(str,0,num)<<endl;
	return 0;     
}