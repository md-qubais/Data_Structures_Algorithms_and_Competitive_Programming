#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
 int subarraySum(vector<int>& nums, int k) {
 	int ans=0;
 	unordered_map<int,int> m;
 	int sum=0;
 	m[0]++;
 	for(int i=0;i<nums.size();i++){
 		sum+=nums[i];
 		if(m[sum-k]!=0){
 			ans+=m[sum-k];
 			m[sum]++;
 			continue;
 		}
 		m[sum]++;
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
	cout<<subarraySum(v,k);
	return 0;   
}
