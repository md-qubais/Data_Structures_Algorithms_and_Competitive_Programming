#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string replace_pi(string str){
	if(str.length()==0){
		return str;
	}
	string ans=replace_pi(str.substr(1));
	if(str.length()>1 and str[0]=='p' and str[1]=='i'){
		ans="3.14"+ans;
		return ans;
	}
	if(str[0]=='i'){
		return ans;
	}
	return str[0]+ans;
}


int32_t main(){
	qubais_judge;
	IOS;	
	string str;
	cin>>str;
	cout<<replace_pi(str);
	return 0;   
}