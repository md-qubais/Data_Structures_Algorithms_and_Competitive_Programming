#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
//this following is the program 
//for the modulo for very large numbers
//there here is a simple mathematical 
//trick to do the modulo of very large numbers
int modulo(string str,int no){
int res=0;
int inc=1;
for(int i=0;i<str.length();i++){
 int num=str[i]-'0';
res=inc*res+num;
res=res%no;
inc=inc*10;
}
return res;
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
    int rem;
    cin>>rem;
    cout<<modulo(str,rem)<<endl;
	return 0;     
}