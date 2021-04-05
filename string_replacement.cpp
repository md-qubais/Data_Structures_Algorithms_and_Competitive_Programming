#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)

string findReplaceString(string s, vector<int>& indexes, vector<string>& sources, vector<string>& targets) {
	string ans="";
	for(int i=0;i<src.size();i++){
		if(can_find(src[i])){

		}else{

		}
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	int n;
	cin>>n;
	vector<int> ind(n);
	for(int i=0;i<n;i++){
		cin>>ind[i];
	}
	vector<string> src(n);
	for(int i=0;i<n;i++){
		cin>>src[i];
	}
	vector<string> dest(n);
	for(int i=0;i<n;i++){
		cin>>dest[i];
	}
	cout<<findReplaceString(s,ind,src,dest)<<endl;
	return 0;   
}