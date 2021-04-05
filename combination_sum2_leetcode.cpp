#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void get(vector<int> v,vector<int> res,int i,int sum,int k,set<vector<int>>&s){
	if(sum==k){
		s.insert(res);
		return;
	}
	if(sum>k){
		return;
	}
	if(i==v.size()){
		return;
	}
	for(int j=i;j<v.size();j++){
		res.push_back(v[j]);
		if(sum+v[j]>k){
			return;
		}
		get(v,res,j+1,sum+v[j],k,s);
		res.pop_back();
	}

}
vector<vector<int>> combinationSum2(vector<int>& v, int k){
	int sum=0;
	vector<vector<int>> ans;
	for(int i=0;i<v.size();i++){
		sum+=v[i];
	}
	if(sum<k){
		return ans;
	}
	sort(v.begin(),v.end());
	vector<int> res;
	set<vector<int>> s;
	get(v,res,0,0,k,s);
	for(auto it:s){
		ans.push_back(it);
	}
	return ans;
}

int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int k;
	cin>>k;
	vector<vector<int>> ans=combinationSum2(v,k);
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}