#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;

 
char keypad[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void generate_chars(char *in,char *out,int i,int j){
if(in[i]=='\0'){
out[j]='\0';
cout<<out<<endl;
return ;
}
int digit=in[i]-'0';
if(digit==1 or digit==0){
return ;
}
for(int k=0;keypad[digit][k]!='\0';k++){
out[j]=keypad[digit][k];
generate_chars(in,out,i+1,j+1);
}
}



int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	char in[100];
	cin>>in;
    char out[100];
    generate_chars(in,out,0,0);
	return 0;
}