#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
//Acode problem from spoj
char ch[]={' ','A','B','C','D','E','F','G','H','I','J','k','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; 
void generate_strings(char *in,char *out,int i,int j){
if(in[i]=='\0'){
out[j]='\0';
cout<<out<<endl;
return ;
}
int digit=in[i]-'0';
if(digit==0){
return ;
}
if(digit<=26a){
out[j]=ch[digit];
generate_strings(in,out,i+1,j+1);
}else{
	return ;
}
if(in[i+1]!='\0'){

int digit2=digit*10+(in[i+1]-'0');
if(digit2<=26){

out[j]=ch[digit2];
generate_strings(in,out,i+2,j+1);
}
}
}

int32_t main() {
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
    char in[100];
    cin>>in;
    char out[100];
    generate_strings(in,out,0,0);
    return 0;
}