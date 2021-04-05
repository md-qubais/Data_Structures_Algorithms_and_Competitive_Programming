#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
//Solving the recurrance is the most important thing
//in the entire recursion

void subsequences(char *ch,char *out,int i,int j){
	if(ch[i]=='\0'){
    out[j]='\0';
    cout<<out<<" ";
    return ;
	}
	subsequences(ch,out,i+1,j);
	out[j]=ch[i];
	subsequences(ch,out,i+1,j+1);

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
	char out[100];
	cout<<" ";
	subsequences(ch,out,0,0);
	cout<<endl;
	cout<<pow(2,strlen(ch));
	return 0;     
}