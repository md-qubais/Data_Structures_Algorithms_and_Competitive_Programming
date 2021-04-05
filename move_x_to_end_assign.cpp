#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

string move(string str,int n,int i){
	static string ans="";
	static string ans1="";
	if(i==n){
		return ans+ans1;
	}
	if(str[i]!='x'){
		ans+=str[i];
	}else{
		ans1+=str[i];
	}
	return move(str,n,i+1);
}


int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	string ans="";
	cout<<move(str,str.length(),0)<<endl;
	return 0;   
}