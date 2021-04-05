#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
static bool compare(pair<int,int> p1,pair<int,int> p2){
	return p1.second>p2.second;
}
vector<int> topKFrequent(vector<int>& nums, int k){
	vector<int> ans;
	unordered_map<int,int> m;
	for(int i=0;i<nums.size();i++){
		m[nums[i]]++;
	}
	vector<pair<int,int>> p;
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
    vector<int> ans(n);
    for(int i=0;i<n;i++){
    	cin>>ans[i];
    }
    int k;
    cin>>k;
    vector<int> res=topKFrequent(ans,k);
    for(int i=0;i<res.size();i++){
    	cout<<res[i]<<" ";
    }    
    cout<<endl;
    return 0;
}