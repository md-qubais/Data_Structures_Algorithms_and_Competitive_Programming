#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string removeDuplicates(string str, int k){
	string ans="";
	stack<pair<char,int>> s;
	for(int i=0;i<str.length();i++){
		if(s.empty()){
			s.push(make_pair(str[i],1));
		//	continue;
		}
	else	if(s.top().first!=str[i]){
		s.push(make_pair(str[i],1));

	}
	else	if(s.top().first==str[i]){
			s.push(make_pair(str[i],s.top().second+1));
		}
		if(s.top().second==k){
			for(int j=1;j<=k and !s.empty();j++){
				s.pop();
			}
		}
	}
	while(!s.empty()){
		ans+=s.top().first;
		s.pop();
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	int k;
	cin>>k;
	cout<<removeDuplicates(str,k)<<endl;
	return 0;   
}