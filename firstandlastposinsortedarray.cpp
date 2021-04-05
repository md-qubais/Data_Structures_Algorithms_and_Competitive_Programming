#include<bits/stdc++.h>
#define ll      long long
using namespace std;  
 vector<int> searchRange(vector<int>& nums, int target) {
 vector<int> res;  
auto i1=lower_bound(nums.begin(),nums.end(),target);
auto i2=upper_bound(nums.begin(),nums.end(),target);
if(i1==i2){
	res.push_back(-1);
	res.push_back(-1);
return res;
}

if(i2-i1==1){
res.push_back(i1-nums.begin());
res.push_back(i1-nums.begin());
return res;
}
res.push_back(i1-nums.begin());
res.push_back(i2-nums.begin()-1);

return res;
}


int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num,target;
    cin>>num>>target;
    vector<int> nums;
    for(int i=0;i<num;i++){
           int a;
           cin>>a;
           nums.push_back(a);
    }
    nums=searchRange(nums,target);
    for(int i=0;i<nums.size();i++){
   cout<<nums[i]<<" ";
    }
    return 0; 
     
}