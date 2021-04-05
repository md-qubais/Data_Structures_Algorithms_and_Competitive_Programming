#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int largestRectangleArea(vector<int>&arr){
	vector<int> left_small(arr.size());
	vector<int> right_small(arr.size());
	stack<int> s;//this store the indices
	for(int i=0;i<arr.size();i++){
		while(!s.empty() and arr[s.top()]>=arr[i]){
			s.pop();
		}
		if(s.empty()){
			left_small[i]=0;
		}else {
			left_small[i]=s.top()+1;
		}
		s.push(i);
	}
	while(!s.empty()){
		s.pop();
	}
	for(int i=arr.size()-1;i>=0;i--){
		while(!s.empty() and arr[s.top()]>=arr[i]){
			s.pop();
		}
		if(s.empty()){
			right_small[i]=arr.size()-1;
		}else{
			right_small[i]=s.top()-1;
		}
		s.push(i);
	}
	int res=0;
	vector<int> ans(arr.size());
	for(int i=0;i<arr.size();i++){
		ans[i]=arr[i]*(right_small[i]-left_small[i]+1);
		res=max(ans[i],res);
	}
	return res;
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
	cout<<largestRectangleArea(v);
    return 0;
}