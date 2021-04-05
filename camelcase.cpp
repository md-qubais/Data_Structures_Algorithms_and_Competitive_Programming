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
    int count=0;
    for(int i=0;i<str.length();i++){
     if(isupper(str[i])){
      if(count==0){
        cout<<str[i];
        count=1;
    }else{
    cout<<endl<<str[i];
    }
     }	else{
     	cout<<str[i];
     }
 }
    return 0;
}