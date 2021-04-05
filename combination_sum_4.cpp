#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int get(vector<int>&v,int j,int k,int sum){
	if(sum==k){
		return 1;
	}
	if(sum>k){
		return 0;
	}
	int ans=0;
	for(int i=j;i<v.size();i++){
		ans+=get(v,i,k,sum+v[i]);
	}
	return ans;
}
int combinationSum4(vector<int>& v, int k){
	return get(v,0,k,0);
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
	cout<<combinationSum4(v,k);

	return 0;   
}