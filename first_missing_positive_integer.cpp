#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int firstMissingPositive(vector<int>& nums){
	if(nums.size()==0){
		return 1;
	}//joh bhi hota iske size ke andar hi hota
	if(nums.size()==1){
		if(nums[0]<=0){
			return 1;
		}
		if(nums[0]>1){
			return 1;
		}
		if(nums[0]==1){
			return 2;
		}
	}
	int n=nums.size();
	for(int i=0;i<n;){
		if(nums[i]==0){
			i++;
			continue;
		}
		if(nums[i]>n or nums[i]<0){
			nums[i]=0;
			i++;
			continue;

		}
		if( nums[i]==nums[nums[i]-1] and i!=nums[i]-1){
			nums[i]=0;
			i++;
			continue;
		}
		else if(nums[i]<=n and nums[i]-1!=i ){
			int idx=nums[i]-1;
			swap(nums[i],nums[idx]);
			continue;
		}	
		i++;
		
	}
	for(int i=0;i<nums.size();i++){
		if(nums[i]==0){
			return i+1;
		}
	}
	return nums.size()+1;
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
	cout<<"the given array is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<"and the answer is:"<<endl;
	cout<<firstMissingPositive(v)<<endl;
	return 0;   
}