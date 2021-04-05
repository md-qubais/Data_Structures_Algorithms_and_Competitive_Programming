#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
	vector<int> ans;
	unordered_map<int,int> m;
	for(int i=0;i<nums2.size();i++){
		m[nums2[i]]++;
	}
	for(auto it:nums1){
		if(m[it]!=0){
			m[it]--;
			ans.push_back(it);
		}
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n1,n2;
	cin>>n1>>n2;
	vector<int> arr1(n1);
	vector<int> arr2(n2);
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}
	vector<int> ans=intersect(arr1,arr2);
	for(auto it:ans){
		cout<<it<<" ";
	}
	cout<<endl;
	return 0;   
}