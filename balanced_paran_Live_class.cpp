#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

bool isbalanced(string str){
	stack<char> s;
	for(int i=0;i<str.length();i++){
		switch(str[i]){
			case '(':
			case '{':
			s.push(str[i]);
			break;
			case ')':
			if(!s.empty() and s.top()=='('){
				s.pop();
			}else{
				return false;
			}
			break;
			case '}':
			if(!s.empty() and s.top()=='{'){
				s.pop();
			}else{
				return false;
			}
			break;
		}
	}
	if(s.empty()) return true;
	return false;
}


int32_t main(){
	qubais_judge;
	IOS;
	string s="}{(a+b)*(b+c)}";
	if(isbalanced(s)) cout<<"yes the expression is balanced"<<endl;
	else cout<<"no the expression is not balanced"<<endl;
	return 0;   
}