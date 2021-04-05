#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//@', '#', '%', '&', '?
string print(string s){
	int small=0;
	int big=0;
	int num=0;
	int chars=0;
	if(s.length()<10){
		return "NO";
	}	


if(s[0]>='a' and s[0]<='z'){
small++;
}
if(s[s.length()-1]>='a' and s[s.length()-1]<='z'){
small++;
}


	for(int i=1;i<s.length()-1;i++){
		if(s[i]>='a' and s[i]<='z'){
			small++;
		}else if(s[i]>='A' and s[i]<='Z'){
			big++;
		}else if(s[i]>='0' and s[i]<='9'){
			num++;
		}else if(s[i]=='@' or s[i]=='#' or s[i]=='%' or s[i]=='&' or s[i]=='?'){
			chars++;
		}
	}
	if(small==0 or big==0 or num==0 or chars==0){
		return "NO";
	}
	return "YES";
}


int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;

		cout<<print(s)<<endl;
	}
	return 0;   
}