#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
void gererate_brackets(char *out,int n,int open,int close,int i){
if(i==2*n){
out[i]='\0';
cout<<out<<endl;
return ;
}
if(open<n){
out[i]='(';
gererate_brackets(out,n,open+1,close,i+1);
}
if(close<open){
out[i]=')';
gererate_brackets(out,n,open,close+1,i+1);
}

}
int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	char out[100];
	gererate_brackets(out,num,0,0,0);
    return 0;
}