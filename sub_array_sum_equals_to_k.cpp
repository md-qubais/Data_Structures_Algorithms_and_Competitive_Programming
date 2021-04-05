#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int subarraySum(vector<int>& nums, int k) {
    int ans=0;
    //for storing the sum of their frequecies
    unordered_map<int,int> m;
	vector<int> presum(nums.size());
	presum[0]=nums[0];
	m[presum[0]]++;
	for(int i=1;i<nums.size();i++){
		presum[i]=presum[i-1]+nums[i];
		m[presum[i]]++;
	}
	for(int i=0;i<presum.size();i++){
		if(presum[i]==k){
			ans++;
			m[presum[i]]--;
			continue;
		}
		if(m[k+presum[i]]!=0  ){
			m[k+presum[i]]--;
			ans++;
			continue;
		}
		if(m[k-presum[i]]!=0){
			m[k-presum[i]]--;
			ans++;
			continue;
		}
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
	int key;
	cin>>key;
	cout<<subarraySum(v,key);
	return 0;   
}