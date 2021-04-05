#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	vector<string> v;
	string s;
	cin>>s;
	while(s.length()!=0){
		v.push_back(s);
		s="";
		cin>>s;
	}
	for(auto it:v){
		cout<<stoi(it)+1<<endl;
	}
	return 0;   
}