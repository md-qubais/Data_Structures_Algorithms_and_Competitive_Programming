#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool contains(string str){
	stack<char> s;
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			continue;
		}
		if(str[i]==')'){
			if(s.top()=='('){
				return true;
			}
			while(s.top()!='('){
				s.pop();
			}
			s.pop();
		}else{
			s.push(str[i]);
		}
	}
	return false;
}
bool isBalanced(string str){
	stack<char> s;
	for(int i=0;i<str.length();i++){
		if(str[i]=='(' or str[i]=='[' or str[i]=='{'){
			s.push(str[i]);
		}else if(str[i]==')'){
			if(s.empty()==true or s.top()!='('){
				return false;
			}else{
				s.pop();
			}
		}else if(str[i]==']'){

			if(s.empty()==true or s.top()!='['){
				return false;
			}else{
				s.pop();
			}
		}else if(str[i]=='}'){
			if(s.empty()==true or s.top()!='{'){
				return false;
			}else{
				s.pop();
			}
		}
	
	}
	if(!s.empty()){
		return false;
	}
	return true;
}
void next_greater(vector<int> &v){
	stack<int> s;
	int j=v.size()-1;
	vector<int> ans(v.size());
	for(int i=v.size()-1;i>=0;i--){
		while(!s.empty() and s.top()<v[i]){
			s.pop();
		}
		if(s.empty()){
			ans[j--]=-1;
			s.push(v[i]);
		}else{
			 ans[j--]=s.top();
			 s.push(v[i]);
		}
	}
	for(auto it:ans){
		cout<<it<<" ";
	}
	cout<<endl;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	next_greater(v);
    return 0;
}