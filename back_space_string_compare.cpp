#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool backspaceCompare(string str1, string str2){
	stack<char> s1;
	stack<char> s2;
	for(int i=0;i<str1.length();i++){
		if(str1[i]!='#'){
			s1.push(str1[i]);
		}else{
			if(s1.empty()){
				continue;
			}else{
				s1.pop();
			}
		}
	}
	for(int i=0;i<str2.length();i++){
		if(str2[i]!='#'){
			s2.push(str2[i]);
		}else{
			if(s2.empty()){
				continue;
			}else{
				s2.pop();
			}
		}
	}
	while(!s1.empty() and !s2.empty()){
		if(s1.top()!=s2.top()){
			return false;
		}
		s1.pop();
		s2.pop();
	}
	if(!s1.empty()){
		return false;
	}
	if(!s2.empty()){
		return false;
	}
	return true;
}
int32_t main(){
	qubais_judge;
	IOS;
	return 0;   
}
 