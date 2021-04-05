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
    str=str+'}';
    int num=1;
    for(int i=1;i<str.length();i++){
    if(str[i]==str[i-1]){
    num++;
    }
     else if(str[i]!=str[i-1]){
           cout<<str[i-1]<<num<<"";
           num=1;

      }
    }
    return 0;
}