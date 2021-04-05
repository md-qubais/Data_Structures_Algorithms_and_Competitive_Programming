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
    for(int i=0;i<str.length();i++){
     int num=str[i]-'0';
     if(num>9-num){
      if(9-num==0&&i==0){
      res=res+str[i];
      }else {
  num=9-num;
        char ch=num+'0';
     	res=res+ch;
      }
     }else{
     		char ch=num+'0';
      	res=res+ch;
      
     }
    }
  cout<<res<<endl;
    return 0;
}