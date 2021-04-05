#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void sub(vector<int> in,vector<int> out,int i,set<vector<int>> &s){
	if(i==in.size()){
		s.insert(out);
		return;
	}
	out.push_back(in[i]);
	sub(in,out,i+1,s);
	out.pop_back();
	sub(in,out,i+1,s);
}


 vector<vector<int>> subsetsWithDup(vector<int>& nums){ 
 	vector<vector<int>> ans;
 	vector<int> res;
 	set<vector<int>> s;
 	sort(nums.begin(),nums.end());
 	sub(nums,res,0,s);
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
	vector<vector<int>> ans=subsetsWithDup(v);
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;   
}