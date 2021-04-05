#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
     char ch=str[i];
     if(ch>=65&&ch<=90){
      str[i]=str[i]+32;
     }else if(ch>=97&&ch<=122){
   str[i]=str[i]-32;
     }else{
     	str="Invalid";
     	break;
     }
    } 
    cout<<str<<endl;
    return 0;
}