#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string removeDuplicates(string str){
	string ans="";
	stack<char> s;
	for(int i=0;i<str.length();i++){
		if(s.empty()==true){
			s.push(str[i]);
		}else{
			if(s.top()==str[i]){
				s.pop();
			}else{
				s.push(str[i]);
			}
		}
	}
	while(!s.empty()){
		ans+=s.top();
		s.pop();
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	string s;
	cin>>s;
	cout<<removeDuplicates(s)<<endl;
	return 0;   
}
