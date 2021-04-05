#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
void permute(char *ch,int i,set<string> &s){
if(ch[i]=='\0'){
	string str(ch);
 	s.insert(str);
return ;
}
for(int j=i;ch[j]!='\0';j++){
swap(ch[j],ch[i]);
permute(ch,i+1,s);
swap(ch[j],ch[i]);
}
}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	char ch[100];
	cin>>ch;
	set<string> s;
	permute(ch,0,s);
	for(auto i:s){
      cout<<i<<endl;
	}
	return 0;     
}