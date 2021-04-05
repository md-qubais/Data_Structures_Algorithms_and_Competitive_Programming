#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
void subsequence(char *in,char *out,int i,int j){
if(in[i]=='\0'){
out[j]='\0';
cout<<out<<endl;
}else{
out[j]=in[i];
subsequence(in,out,i+1,j+1);
subsequence(in,out,i+1,j);
}   
}
int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
    char inp[]="imad";
    char out[100];
    subsequence(inp,out,0,0);
	return 0;     
}