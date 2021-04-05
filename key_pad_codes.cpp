#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string str[]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
int sum=0;
void phone(string s,int n,int i,string ans){
	if(i==n){
		cout<<ans<<endl;
		sum++;
		return;
	}
	
	char ch=s[i];
	string a=str[ch-'0'];
	for(int j=0;j<a.length();j++){
		phone(s,n,i+1,ans+a[j]);
	}

}


int32_t main(){
	qubais_judge;
	IOS;
	string s;
	cin>>s;
	string ans="";
	phone(s,s.length(),0,ans);
	cout<<endl;
	cout<<sum<<endl;
	return 0;   
}