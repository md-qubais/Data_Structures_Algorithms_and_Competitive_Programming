#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

string replace_pi(string str,int i,int n,string &ans){
	if(i==n){
		return ans;
	}
	if(str[i]=='p' and i<n and str[i+1]=='i'){
		ans+="3.14";
		return replace_pi(str,i+2,n,ans);
	}else{
		ans+=str[i];
	}
	return replace_pi(str,i+1,n,ans);
}


int32_t main(){
	qubais_judge;
	IOS;	
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		string ans;
		cout<<replace_pi(str,0,str.length(),ans)<<endl;
	}
	return 0;   
}