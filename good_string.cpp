#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string makeGood(string str){
	string ans="";
	stack<char> s;
	for(auto it:str){
		if(s.empty()){
			s.push(it);
		}else{
			if(s.top()==it+32 or s.top()==it-32){
				s.pop();
			}else{
				s.push(it);
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
	cout<<makeGood(s)<<endl;
	return 0;   
}