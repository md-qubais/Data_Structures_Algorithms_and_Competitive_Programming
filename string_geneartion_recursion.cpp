#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
char ch[]={' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};   
void string_generation(char *in,char *out,int i,int j){
if(in[i]=='\0'){
out[j]='\0';
cout<<out<<endl;
return ;
}
int dig=in[i]-'0';
if(dig==0){
return ;
}
if(dig<=26){
out[j]=ch[dig];
string_generation(in,out,i+1,j+1);
}
else{
	return ;
}
if(in[i+1]!='\0'){
int dig2=dig*10+(in[i+1]-'0');
if(dig2<=26){
out[j]=ch[dig2];
string_generation(in,out,i+2,j+1);
}
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
	char out[100];
	cin>>ch;
    string_generation(ch,out,0,0);
	return 0;     
}