#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

vector<string> printVertically(string s){
	vector<string> ans;
	vector<string> res;
	string temp="";
	int M=INT_MIN;
	for(int i=0;i<s.length();i++){
		if(s[i]!=' '){
			temp+=s[i];
			continue;
		}
		ans.push_back(temp);
		temp="";
	}
	ans.push_back(temp);
	for(auto it:ans){
		M=max(M,(int)it.length());
	}
	int i=0;
	while(i<M){
		string t="";
		for(auto it:ans){
			if(it.length()<=i){
				t+=" ";
			}else{
				t+=it[i];
			}
		}
		res.push_back(t);
		i++;
	}
	vector<string> result;
	for(auto it:res){
		string str=it;
		reverse(str.begin(),str.end());
		int i=0;
		while(i<str.length() and str[i]==' '){
			i++;
		}
		str=str.substr(i);
		if(str.length()==0){
			continue;
		}
		reverse(str.begin(),str.end());
		result.push_back(str);
	}
	return result;
}

int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	cin.ignore();
	string s;
	getline(cin,s);
	vector<string> ans=printVertically(s);
	for(auto it:ans){
		cout<<it<<endl;
	}
	return 0;   
}
