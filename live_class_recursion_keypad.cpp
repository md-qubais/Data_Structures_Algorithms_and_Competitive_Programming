#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string str[]={"",
	"ABC",
	"DEF",
	"GHI",
	"JKL",
	"MNO",
	"PQRS",
	"TUV",
	"WXYZ"
};

void phone(string s,string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	int num=s[0]-'0';
	string temp=str[num];
	for(int i=0;i<temp.length();i++){
		phone(s.substr(1),ans+temp[i]);
	}
}


int32_t main(){
	qubais_judge;
	IOS;	
	string s;
	cin>>s;
	string ans="";
	phone(s,ans);
	return 0;   
}