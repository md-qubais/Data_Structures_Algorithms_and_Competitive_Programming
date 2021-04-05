#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void next_greater(vector<int> &v){
	stack<int> s;
	vector<int> ans(v.size());
	for(int i=0;i<v.size();i++){
		while(!s.empty() and v[s.top()]<v[i]){
			ans[s.top()]=v[i];
			s.pop();
		}
		s.push(i);
	}
	while(!s.empty()){
		ans[s.top()]=-1;
		s.pop();
	}
	for(auto it:ans){
		cout<<it<<endl;
	}
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
	next_greater(v);
   return 0;
}