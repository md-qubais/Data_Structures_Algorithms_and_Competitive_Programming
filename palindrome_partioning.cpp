#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool ispalindrome(string temp){
	if(temp.length()==0){
		return false;
	}
	int i=0;
	int j=temp.length()-1;
	while(i<j){
		if(temp[i++]!=temp[j--]){
		return false;
	}
	}
	return true;
}
void get(string s,string res,vector<vector<string>>&ans,vector<string> &result){
	for(int i=0;i<s.length();i++){
    //do it here
		res=s.substr(0,i+1);
		string temp1=;
		string temp2;
		if(ispalindrome(res)){
			//if(){
			result.push_back(res);
	//	}
		}
		get(s.substr(i+1),res,ans,result);
		if(result.size()!=0){
		ans.push_back(result);
	}
		result.clear();
	}
	//clear it here
	
}

vector<vector<string>> partition(string s){
	vector<vector<string>> ans;
	vector<string> res;
	get(s,"",ans,res);
	return ans;
}

int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	vector<vector<string>> res=partition(str);
	for(int i=0;i<res.size();i++){
		for(int j=0;j<res[i].size();j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}