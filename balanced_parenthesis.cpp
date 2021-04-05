#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

bool balanced(string s){
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			st.push(s[i]);
			continue;
		}else{
			if(st.empty()){
				return false;
			}
			st.pop();
		}
	}
	if(!st.empty()){
		return false;
	}
	return true;
}


int32_t main(){
	qubais_judge;
	IOS;
	string s;
	cin>>s;
	if(balanced(s)){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}