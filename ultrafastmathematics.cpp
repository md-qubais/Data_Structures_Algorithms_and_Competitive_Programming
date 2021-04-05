#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cin.get();
    while(n>0){
    	n--;
    string str1,str2;
    cin>>str1>>str2;
     for(int i=0;i<str1.length();i++){
      if(str1[i]==str2[i]){
          cout<<"0";
      }
      else{
      	cout<<"1";
      }
     }
     cout<<endl;
    }
    return 0;
}