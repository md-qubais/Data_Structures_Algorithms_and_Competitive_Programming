#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
class Tuple{
public:
	int val;
	int row;
	int sum;
	Tuple(int val,int row,int sum){
		this->val=val;
		this->row=row;
		this->sum=sum;
	}
};
bool compare(Tuple t1,Tuple t2){
	if(t1.sum==t2.sum){
		return t1.row>t2.row;
	}
	return t1.sum<t2.sum;
}
vector<int> findDiagonalOrder(vector<vector<int>>& nums){
	vector<int> ans;
	vector<Tuple> t;
	for(int i=0;i<nums.size();i++){
		for(int j=0;j<nums[i].size();j++){
			Tuple tup(nums[i][j],i,i+j);
			t.push_back(tup);
		}
	}
	sort(t.begin(),t.end(),compare);
	for(int i=0;i<t.size();i++){
		ans.push_back(t[i].val);
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n,m;
	cin>>n>>m;
	vector<vector<int>> mat;
	for(int i=0;i<n;i++){
		vector<int> temp(m);
		for(int j=0;j<m;j++){
			cin>>temp[j];
		}
		mat.push_back(temp);
	}
	vector<int> ans=findDiagonalOrder(mat);
	for(auto it: ans){
		cout<<it<<" ";
	}
	cout<<endl;
	return 0;   
}