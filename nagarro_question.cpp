#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
vector<int> sort_neg(vector<int>&arr){
	vector<int> ans;
	int Max=INT_MIN;
	for(int i=0;i<arr.size();i++){
		Max=max(Max,arr[i]);
	}
	vector<vector<int>> res(Max+1);
	for(int i=0;i<arr.size();i++){
		int num=arr[i];
		if(arr[i]<0){
			num=-num;
		}
		res[num].push_back(arr[i]);
	}
	for(int i=0;i<res.size();i++){
		if(res[i].size()==0){
			continue;
		}
		for(auto it:res[i]){
			ans.push_back(it);
		}
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(auto it:arr){
		cout<<it<<" ";
	}
	cout<<endl;
	vector<int> ans=sort_neg(arr);
	for(auto it:ans){
		cout<<it<<" ";
	}
	cout<<endl;
	return 0;
}