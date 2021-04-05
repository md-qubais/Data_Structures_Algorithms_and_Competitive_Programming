#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string move_x(string str,string ans){
	if(str.length()==0){
		return ans;
	}
	ans=move_x(str.substr(1),ans);
	if(str[0]=='x'){
		ans+=str[0];
	}else{
		ans=str[0]+ans;
	}
	return ans;
}



int32_t main(){
	qubais_judge;
	IOS;	
	string str;
	cin>>str;
	string ans="";
	ans=move_x(str,ans);
	cout<<ans<<endl;
	return 0;   
}