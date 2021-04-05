#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
static bool compare(pair<char,int> p1,pair<char,int> p2){
	if(p1.second==p2.second){
		return p1.first<p2.first;
	}
	return p1.second>p2.second;

}
string frequencySort(string s){
	string ans="";
	vector<pair<int,int>> res;
	unordered_map<char,int> m;
	for(int i=0;i<s.length();i++){
		m[s[i]]++;
	}
	for(auto it:m){
		res.push_back(make_pair(it.first,it.second));
	}
	sort(res.begin(),res.end(),compare);
	for(int i=0;i<res.size();i++){
		while(m[res[i].first]--){
			ans+=res[i].first;
		}
	}
	return ans;
}
int32_t main(){
    qubais_judge;
    IOS;
    string str;
    cin>>str;
    cout<<frequencySort(str)<<endl;
    return 0;
}