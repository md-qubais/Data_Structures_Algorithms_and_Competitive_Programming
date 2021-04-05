#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int minAddToMakeValid(string str){
	int ans=0;
	stack<char> s;
	for(int i=0;i<str.length();i++){
		if(str[i]=='('){
			s.push(str[i]);
		}else{
			if(str[i]==')' and (s.empty() or s.top()!='(')){
				ans++;
			}else{
				s.pop();
			}
		}
	}
	while(!s.empty()){
		s.pop();
		ans++;
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	cout<<minAddToMakeValid(str)<<endl;
	return 0;   
}