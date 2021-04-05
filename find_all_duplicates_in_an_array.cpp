#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
	vector<int> ans;
	if(nums.size()==0){
		return ans;
	}
	int n=nums.size();
	for(int i=0;i<n;){
		if(nums[i]==0){
			i++;
			continue;
		}
		if(nums[i]==nums[nums[i]-1] and i==nums[i]-1){
			i++;
			continue;
		}
		if(nums[i]==nums[nums[i]-1] and i!=nums[i]-1){
			ans.push_back(nums[i]);
			nums[nums[i]-1]=0;
			i++;
			continue;
		}
		else{
			int idx=nums[i]-1;
			swap(nums[idx],nums[i]);
			continue;
		}
		i++;
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
	vector<int> ans=findDuplicates(v);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;   
}