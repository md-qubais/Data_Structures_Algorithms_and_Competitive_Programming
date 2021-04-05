#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
int stringConstruction(string s) {
int res=0;
string str="";
int j=0;
while(str!=s){
	int a;
	int i;
	for( i=0;i<=j;i++){
      a=s.find(str.substr(i,j));
      if(a==-1){
   break;
      }
	}
for(int k=i;k<=j;k++){
str=str+
}


}



return res;
}
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
    cin.get();
    while(n>0){
     n--;
     string str;
     getline(cin,str);
     cout<<stringConstruction(str)<<endl;
    }
    return 0;
}
