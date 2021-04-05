#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

bool issame(string s1,string s2){
for(int i=0;i<s1.length();i++){
if(s1[i]==s2[i]){
continue;
}else{
	return false;
}
}


return true;
}



int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	string ans;
	for(int i=0;i<str.length();i++){
		ans+=" ";
	}
	ans+=" ";
	for(int i=str.length()-1;i>=0;i--){
		int num=str[i]-'0';//5
		ans[num]=(str.length()-i)+'0';
	}
	reverse(ans.begin(),ans.end());
	if(issame(str,ans)){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	return 0;   
}