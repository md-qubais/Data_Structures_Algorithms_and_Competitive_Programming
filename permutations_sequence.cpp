#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void get(string s,vector<string>&ans,string res){
	if(s.length()==0){
		ans.push_back(res);
		return;
	}
	if(s[0]>='0' and s[0]<='9'){
		get(s.substr(1),ans,res+s[0]);
		return;
	}
	get(s.substr(1),ans,res+s[0]);
	if(s[0]>='a' and s[0]<='z'){
		get(s.substr(1),ans,res+((char)(s[0]-32)));
		return;
	}
	if(s[0]>='A' and s[0]<='Z'){

		get(s.substr(1),ans,res+((char)(s[0]+32)));
		return;
	}
}
vector<string> letterCasePermutation(string s){
	vector<string> ans;
	get(s,ans,"");
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	string s;
	cin>>s;
	vector<string> ans=letterCasePermutation(s);
	for(auto it:ans){
		cout<<it<<" ";
	}
	cout<<endl;
	return 0;   
}