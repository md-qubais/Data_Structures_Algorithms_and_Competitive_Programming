#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
void subsequences(char *in,char *out,int i,int j){
	
	if(in[i]=='\0'){
      out[j]='\0';
      cout<<out<<" ";
      return ;
	}
out[j]=in[i];
subsequences(in,out,i+1,j);
subsequences(in,out,i+1,j+1);
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
	cout<<" ";
	subsequences(ch,out,0,0);
	cout<<endl;
	cout<<pow(2,strlen(ch))<<endl;
	return 0;     
}