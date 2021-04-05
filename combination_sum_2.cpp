#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void get(vector<int>in,vector<int>out,int j,int sum,int k,vector<vector<int>>&ans,int n){
	if(sum==k and out.size()==n){
		ans.push_back(out);
		return;
	}
	if(sum>k){
		return;
	}
	if(j==in.size()){
		return;
	}
	for(int i=j;i<in.size();i++){
		if(sum+in[i]>k){
			return;
		}
		out.push_back(in[i]);
		get(in,out,i+1,sum+in[i],k,ans,n);
		out.pop_back();
	}
}
vector<vector<int>> combinationSum3(int k, int n){
	vector<vector<int>> ans;
	if(k>n){
		return ans;
	}
	if((k*(k+1)/2)==n){
		vector<int> res;
		for(int i=1;i<=k;i++){
			res.push_back(i);
		}
		ans.push_back(res);
		return ans;
	}
	vector<int> in;
	for(int i=1;i<=9;i++){
		in.push_back(i);
	}
	vector<int> out;
	get(in,out,0,0,n,ans,k);
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int k;
	int n;
	cin>>k>>n;
	vector<vector<int>> ans=combinationSum3(k,n);
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;   
}