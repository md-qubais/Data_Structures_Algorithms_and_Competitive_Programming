#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
vector<string> num={
	"",
	"",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wxyz"
};
void do_it(string s1,string s2,vector<string> &ans){
	if(s1.length()==0){
		ans.push_back(s2);
		return;
	}
	string str=num[s1[0]-'0'];
	for(int i=0;i<str.length();i++){
		do_it(s1.substr(1),s2+str[i],ans);
	}

}
vector<string> letterCombinations(string digits) {
	vector<string> ans;
	do_it(digits,"",ans);
	return ans;
}
int32_t main(){
	qubais_judge;
	string str;
	cin>>str;
	vector<string> ans=letterCombinations(str);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	IOS;
	return 0;   
}