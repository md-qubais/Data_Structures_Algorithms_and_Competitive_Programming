#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string move_all(string s){
	if(s.length()==0){
		return s;
	}
	string str="";
	str+=s[0];
	string small=move_all(s.substr(1));
	if(str=="x"){
		return small+str;
	}
	return str+small;
}


int32_t main(){
	qubais_judge;
	IOS;	
	string str;
	cin>>str;
	cout<<move_all(str)<<endl;
	return 0;   
}