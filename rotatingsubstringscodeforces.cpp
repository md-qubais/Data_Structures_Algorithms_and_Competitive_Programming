#include<bits/stdc++.h>
using namespace std;   
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n>0){
    n--;
    int num;
    cin>>num;
    string str,s;
    cin>>str;
    cin.get();
    cin>>s;
    
    int count=0;;
    if(s==str){
     cout<<0<<endl;
    }else{
    for(int i=0;i<num;i++){
     rotate(str.begin()+i,str.begin()+str.length()-1,str.end());
     count++;
     if(str==s){
   break;
     }   
    }
    if(s==str){
 
   cout<<count<<endl;
    }else{
    	cout<<-1<<endl;
    }

}
    }
    return 0;
}