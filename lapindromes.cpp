#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int f1[26]={0};
		int f2[26]={0};
		for(int i=0;i<(s.length())/2;i++){
			f1[s[i]-'a']++;
		}
		int start;
		if((s.length()%2)==0){
			start=s.length()/2;
		}else{
			start=(s.length()/2)+1;
		}
		for(int i=start;i<s.length();i++){
			f2[s[i]-'a']++;
		}
		bool b=false;
		for(int i=0;i<26;i++){
			if(f1[i]!=f2[i]){
				b=true;
				break;
			}
		}
		if(b){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
	return 0;   
}