#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int maxArea(vector<int>&v){
	int ans=INT_MIN;
	int s=0;
	int e=v.size()-1;
	while(s<e){
		if(v[s]<v[e]){
			ans=max(ans,v[s]*(e-s));
			s++;
		}else{
			ans=max(ans,v[e]*(e-s));
			e--;
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
	cout<<maxArea(v)<<endl;
	return 0;   
}