#include<bits/stdc++.h>
#define ll      long long
using namespace std;  
int string_to_int(string str,int n){
if(n<0){
return 0;
}
return (str[n]-'0')+string_to_int(str,n-1)*10;
}


int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    getline(cin,str);
    int num=string_to_int(str,str.length()-1);
    cout<<num<<endl;
    return 0;     
}