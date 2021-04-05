#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool can(vector<int>&nums,int i,int n){
	if(i>=n){
		return true;
	}
	if(nums[i]==0){
		return false;
	}
	for(int j=nums[i];j>=1;j--){
		if(can(nums,i+j,n)){
			return true;
		}
	}
	return false;
 }
    bool canJump(vector<int>& nums){
        return can(nums,0,nums.size()-1);
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
	cout<<canJump(v)<<endl;
	return 0;
}
