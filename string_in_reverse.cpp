#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string reverseWords(string s) {
	string ans="";
	string temp="";
	vector<string> p;
	for(int i=0;i<s.length();i++){
		if(s[i]==' '){
			if(temp.length()!=0){
				p.push_back(temp);
			}
			temp="";
		}else{
			temp+=s[i];
		}
		if(i==s.length()-1){
			if(temp.length()!=0){
				p.push_back(temp);
			}
			continue;
		}
		
	}
	for(int i=p.size()-1;i>=0;i--){
		if(i==0){
			ans+=p[i];
			continue;
		}else{
			ans+=p[i]+" ";
		}
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	string str;
	getline(cin,str);
	cout<<reverseWords(str)<<endl;
	return 0;
}