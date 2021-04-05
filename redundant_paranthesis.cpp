#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
bool redundant_paranthesis(char *ch,int len){
stack<int> s;
for(int i=0;i<ch[i];i++){
if(ch[i]!=')'){
s.push(ch[i]);
}else{
	int count=0;
	while(!s.empty() and s.top()!='('){
          count++;
          s.pop();
	}
	if(count==0){
   return true;
	}else{
		s.pop();
	}
}
}
return false;
}
int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	while(t--){
         char ch[100];
         cin>>ch;
         if(redundant_paranthesis(ch,strlen(ch))){
         	cout<<"Duplicate"<<endl;
         }else{
         	cout<<"Not Duplicates"<<endl;
         }
	}
	return 0;     
}