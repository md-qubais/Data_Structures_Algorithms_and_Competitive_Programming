#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int dp[1000000]={0};
bool canReach(vector<int>& arr, int start){
	if(start<0 or start>arr.size()-1){
		return false;
	}
	if(arr[start]==0){
		return true;
	}
	if(dp[start]!=0){
		return false;
	}
	dp[start]=1;
	bool left=canReach(arr,start-arr[start]);
	if(left){
		return true;
	}

	bool right=canReach(arr,start+arr[start]);
	if(right){
		return true;
	}
	dp[start]=0;
	return false;
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
	int start;
	cin>>start;
	cout<<canReach(v,start)<<endl;
	return 0;
}
