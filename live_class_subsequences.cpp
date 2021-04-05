#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void subsequences(char *in,char *out,int i,int j){
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	/* first we are including then excluding
	out[j]=in[i];
	subsequences(in,out,i+1,j+1);
	subsequences(in,out,i+1,j);
	*/	
   /* first we are excluding and then including
	subsequences(in,out,i+1,j);
	out[j]=in[i];
	subsequences(in,out,i+1,j+1);
	*/
}


int32_t main(){
	qubais_judge;
	IOS;	
	char in[100];
	char out[100];
	cin>>in;
	subsequences(in,out,0,0);
	return 0;   
}