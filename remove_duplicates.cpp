#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
void remove_duplicates(char *ch,int i,int size){
if(ch[i]=='\0'){
return ;
}
if(ch[i]==ch[i-1]){
int j=i;
for(;ch[j];j++){
ch[j-1]=ch[j];
}
ch[j-1]='\0';
remove_duplicates(ch,i,size);
}else remove_duplicates(ch,i+1,size);
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
    remove_duplicates(ch,1,strlen(ch));
	cout<<ch<<endl;
	return 0;     
}