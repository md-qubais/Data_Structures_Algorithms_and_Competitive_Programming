#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
bool compare(string s1,string s2){
int a1=s1.find(s2),a2=s2.find(s1);
if(a1>-1){
return true;
}
if(a2>-1){
return true;
}
return s1<s2;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    string str[num];
    cin.get();
    for(int i=0;i<num;i++){
     getline(cin,str[i]);
    }
    sort(str,str+num,compare);
    for(int i=0;i<num;i++){
    cout<<str[i]<<endl;
    }
    return 0; 
    
}