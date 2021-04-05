#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
static bool compare(pair<string,int> p1,pair<string,int> p2){
	if(p1.second==p2.second){
	return	p1.first<p2.first;
	}
	return p1.second>p2.second;
}
vector<string> topKFrequent(vector<string>& words, int k) {
	vector<string> ans;
	unordered_map<string,int> m;
	for(int i=0;i<words.size();i++){
		m[words[i]]++;
	}
	vector<pair<string,int>> p;
	for(auto it:m){
		p.push_back(make_pair(it.first,it.second));
	}
	sort(p.begin(),p.end(),compare);
	for(int i=0;i<k;i++){
		ans.push_back(p[i].first);
	}
	return ans;
 }
int32_t main(){
    qubais_judge;
    IOS;    
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    int k;
    cin>>k;
    vector<string> ans=topKFrequent(v,k);
    for(int i=0;i<ans.size();i++){
    	cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}