#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int pivotIndex(vector<int>& nums){
	int ans=-1;
	vector<int> left(nums.size());
	left[0]=nums[0];
	vector<int> right(nums.size());
	right[nums.size()-1]=nums[nums.size()-1];
	for(int i=1;i<nums.size();i++){
		left[i]=left[i-1]+nums[i];
	}
	for(int i=nums.size()-2;i>=0;i--){
		right[i]=right[i+1]+nums[i];
	}
	
	for(int i=0;i<nums.size();i++){
		int l=(nums[i]-left[i]);
		int r=(nums[i]-right[i]);
		if(l==r){
			ans=i;
			break;
		}
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
	cout<<pivotIndex(ans)<<endl;
	return 0;
}