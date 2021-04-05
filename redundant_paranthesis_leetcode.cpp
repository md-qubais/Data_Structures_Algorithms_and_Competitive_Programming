#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string removeOuterParentheses(string str){
	string ans="";
	stack<char> s;
	int prev=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='('){
			s.push('(');
			prev=0;
		}else{
			if(prev==0){
				prev=1;
				s.pop();
			}else{
				s.pop();
				prev=0;
			}
		}
	}
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	string s;
	cin>>s;
	cout<<removeOuterParentheses(s)<<endl;
	return 0;   
}