#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int jump(vector<int>& nums){
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
		i=idx;
		count++;
	}
	return count;
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
	cout<<jump(arr)<<endl;
	return 0;   
}