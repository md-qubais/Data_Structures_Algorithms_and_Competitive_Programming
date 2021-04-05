#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string addStrings(string num1, string num2){
	string ans="";
	int i=num1.length()-1;
	int j=num2.length()-1;
	int r=0;
	while(i>=0 and j>=0){
		int num=(num1[i]-'0')+(num2[j]-'0')+r;
		r=num/10;
		ans=to_string(num%10)+ans;
		i--;
		j--;
	}
	while(i>=0){
		int num=(num1[i]-'0')+r;
		r=num/10;
		ans=to_string(num%10)+ans;
		i--;
	}
	while(j>=0){
		int num=(num2[j]-'0')+r;
		r=num/10;
		ans=to_string(num%10)+ans;
		j--;
	}
	if(r>0){
		ans=to_string(r)+ans;
	}
	if(ans.length()>0){
		while(ans.length()>0 and ans[0]=='0'){
			ans=ans.substr(1);
		}
	}
	if(ans.length()==0){
		return "0";
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	string s1,s2;
	cin>>s1>>s2;
	cout<<addStrings(s1,s2)<<endl;
	return 0;   
}