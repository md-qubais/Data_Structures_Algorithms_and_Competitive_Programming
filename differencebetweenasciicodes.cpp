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
    string res="";
    for(int i=0;i<str.length()-1;i++){
      char ch1=str[i],ch2=str[i+1];
      res=res+ch1;   
       string s=to_string((int)(ch2-ch1));
       res=res+s;
    } 
    res=res+str[str.length()-1];
    cout<<res<<endl;
    return 0;
}