#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool canJump(vector<int>& nums){
		int count=0;
	int i=0;
	while(true){
		if(i>=nums.size()-1){
			break;
		}
		int idx=i;
		int val=0;
		for(int j=1;j<=nums[i];j++){
			if(i+nums[i]>=nums.size()-1){
				idx=i+nums[i];
				break;
			}
			int next_jump=i+nums[i+j]+j;
			if(next_jump>=nums.size()-1){
				idx=i+j;
				break;
			}
			if(next_jump>val){
				idx=i+j;
				val=next_jump;
			}
		}
		if(i==idx){
			return false;
		}
		i=idx;
	}
return true;
}
int32_t main(){
	qubais_judge;
	IOS;
	return 0;   
}