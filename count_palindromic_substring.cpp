#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool is_palindrome(string s){
	int i=0;
	int j=s.length()-1;
	while(i<j){
		if(s[i++]!=s[j--]){
			return false;
		}
	}
	return true;
}
int lps(string s){
	int ans=0;
	for(int i=0;i<s.length();i++){
		for(int j=i;j<s.length();j++){
			if(i==j){
				ans++;
			}else{
				string temp="";
				for(int i1=i;i1<=j;i1++){
					temp+=s[i1];
				}
				if(is_palindrome(temp)){
					ans++;
				}
			}
		}
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	string s;
	cin>>s;
	cout<<lps(s);
	return 0;   
}