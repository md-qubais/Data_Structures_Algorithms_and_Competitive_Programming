#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void generate_brackets(string s,int n,int i,int j,vector<string>&ans){
	if(s.length()==2*n){

		ans.push_back(s);
		return;
	}
	if(i<n){
		generate_brackets(s+"(",n,i+1,j,ans);
	}
	if(j<i){
		generate_brackets(s+")",n,i,j+1,ans);
	}

}
 vector<string> generateParenthesis(int n) {
 	vector<string> ans;
    generate_brackets("",n,0,0,ans);
    return ans;
}

int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<string> ans=generateParenthesis(n);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;   
}