#include<bits/stdc++.h>
#define IOS ios_base::sync_w1ith_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int fun(vector<char> a,vector<char> b){
	set<char> s(a.begin(),a.end());
	int t=0;
	for(auto x:b){
		if(s.find(x)!=s.end()){
			t++;
		}
	}
	return t;
}


int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<string,vector<char>>m;
		string s;
		for(int i=0;i<n;i++){
			cin>>s;
			if(s.length()>0){
				m[s.substr(1)].push_back(s[0]);
			}
		}
		int ans=0;
		for(auto i:m){
			for(auto j:m){
				if(i.first!=j.first){
					int temp=fun(i.second,j.second);
					ans+=(i.second.size()-temp)*(j.second.size()-temp);
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;   
}
