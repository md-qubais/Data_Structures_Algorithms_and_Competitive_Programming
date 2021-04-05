#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int pairs(int k, vector<int> arr) {
	int ans=0;
	unordered_map<int,int> m;
	for(auto it: arr){
		m[it]++;
	}
	for(auto it:arr){
		if(m[it+k]!=0){
			ans++;
		}
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	return 0;
}