#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
vector<int> twoSum(vector<int>& v, int k) {
	vector<int> ans;
	unordered_map<int,int> m;
	for(int i=0;i<v.size();i++){
		m[v[i]]=i;
	}
	for(int i=0;i<v.size();i++){
		if(m[k-v[i]]!=0 and i!=m[k-v[i]]){
			ans.push_back(i+1);
			ans.push_back(m[k-v[i]]+1);
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
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int target;
	cin>>target;
	v=twoSum(v,target);
	for(int i=0;i<v.size()-1;i++){
		cout<<v[i]<<" "<<v[i+1];
	}
	return 0;   
}