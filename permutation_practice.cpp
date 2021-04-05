#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
void permutation(char *in,char *out,int i,int j,int n){
if(i==n){
out[j]='\0';
cout<<out<<endl;
return ;
}
out[j]=in[i];
permutation(in,out,i+1,j+1,n);
permutation(in,out,i+1,j,n);
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
	permutation(ch,out,0,0,strlen(ch));
	return 0;     
}