#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string multiply(string num1, string num2){
	string ans="";
	int k=0;
	for(int i=num2.length()-1;i>=0;i--){
		int num=num2[i]-'0';
		string s="";
		int carry=0;
		for(int j=num1.length()-1;j>=0;j--){
			int n=(num1[j]-'0')*num+carry;
			s+=n%10+'0';
		  //  cout<<n%10<<" ";
			carry=n/10;
		}
		if(carry!=0){
			s+=carry+'0';
		//	cout<<carry<<" ";
		}
		//cout<<endl;
		int n=1;
		while(n<=k){
			s='0'+s;
			n++;
		}
		int i1=0;
		int j1=0;
		carry=0;
		string temp="";
		while(i1<s.length() and j1<ans.length()){
			int n=(s[i1]-'0')+(ans[j1]-'0')+carry;
			temp+=n%10+'0';
			carry=n/10;
			i1++;
			j1++;
		}
		while(i1<s.length()){
			int n=(s[i1]-'0')+carry;
			temp+=(n%10)+'0';
			carry=n/10;
			i1++;
		}
		while(j1<ans.length()){
			int n=(ans[j1]-'0')+carry;
			temp+=(n%10)+'0';
			carry=n/10;
			j1++;
		}
		//here we have to handle the 
		//carry if the carry is present 
		//after the execution of the loop
		if(carry!=0){
			temp+=carry+'0';
		}
		ans=temp;
		k++;
	}
	reverse(ans.begin(),ans.end());
	while(ans.length()>=1 and ans[0]=='0'){
		ans=ans.substr(1);
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
	cout<<multiply(s1,s2)<<endl;
	return 0;   
}