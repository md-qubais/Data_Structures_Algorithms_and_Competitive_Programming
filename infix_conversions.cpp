#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void convert_post(string str){
	stack<string> exp;
	stack<char> op;
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			continue;
		}
		if(str[i]=='+' or str[i]=='-' or str[i]=='*' or str[i]=='/'){
			op.push(str[i]);
			continue;
		}
		if(str[i]=='('){
			op.push(str[i]);
			continue;
		}
		if(str[i]==')'){
			continue;
		}
		if(){

		}
	}

}
int32_t main(){
	qubais_judge;
	IOS;
	string s;
	getline(cin,s);
	convert_post(s);
	return 0;
}