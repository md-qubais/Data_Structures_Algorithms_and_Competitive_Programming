#include<bits/stdc++.h>
#define ll   long long
using namespace std;   
int palindromeIndex(string s) {
for(int i=0;i<s.length();i++){
string str=s;
string arb=str;
reverse(arb.begin(),arb.end());
if(arb==str){
return -1;
}
str.erase(str.begin()+i);
string str1=str;
reverse(str.begin(),str.end());
if(str==str1){
return i;
}
}

return -1;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0)
    { 
    	t--;
       string str;
       cin>>str;
       cout<<palindromeIndex(str)<<endl;
    }
    return 0; 
    
}