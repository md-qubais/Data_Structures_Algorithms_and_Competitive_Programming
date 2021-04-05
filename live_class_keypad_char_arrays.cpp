#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
char ch[][1000]={
	"",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wx",
	"yz",
};

void keypad(char *in,char *out,int i,int j,int &a){
	if(in[i]=='\0'){
		a++;
		out[j]='\0';
		cout<<out<<" ";
		return;
	}
	int num=in[i]-'0';
	char *str=ch[num];
	for(int k=0;str[k]!='\0';k++){
		out[j]=str[k];
		keypad(in,out,i+1,j+1,a);
	}
	return;
}





int32_t main(){
	qubais_judge;
	IOS;
	char c[10000];
	cin>>c;
	char ans[10000];
	int a=0;
	keypad(c,ans,0,0,a);
	cout<<endl;
	cout<<a<<endl;
	return 0;   
}