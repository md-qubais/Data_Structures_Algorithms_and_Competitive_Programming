#include<bits/stdc++.h>
using namespace std;

bool compare(string s1,string s2){
string str1=s1+s2;
string str2=s2+s1;
return str1>str2;
}

int main(){
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
    cin.get();
     string res[num];
     for(int i=0;i<num;i++){
     cin>>res[i];
     }
     sort(res,res+num,compare);
   for(int i=0;i<num;i++){
   cout<<res[i];
   }
   cout<<endl;
    }
    return 0;
}