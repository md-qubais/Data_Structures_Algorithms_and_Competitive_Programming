#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string s1;
void permutation(string str,string ans){
	if(str.length()==0){
		if(ans>s1){//for smaller ans<s1
			cout<<ans<<endl;
		}
		return;
	}
	for(int i=0;i<str.length();i++){
		string temp=str.substr(0,i)+str.substr(i+1);
		permutation(temp,ans+str[i]);
	}
}



int32_t main(){
	qubais_judge;
	IOS;
	string s;
	cin>>s1;
	s=s1;
	sort(s.begin(),s.end());
	permutation(s,"");
	return 0;   
}