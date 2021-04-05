#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int removeDuplicates(vector<int>& nums) {
	if(nums.size()==0){
		return 0;
	}
	int i=0;
	int j=i+1;
	int count=0;
	while(i<nums.size()-1 and j<nums.size()){
		if(nums[i]==nums[j]){
			j++;
			count++;
			continue;
		}else if(count>1){
			nums.erase(nums.begin()+i+2,nums.begin()+j);
			i=i+2;
			j=i+1;
			count=0;
			continue;
		}else{
			i=j;
			j++;
			count=0;
			continue;
		}
	}
	cout<<i<<" "<<j<<endl;
	if(count>1){
			nums.erase(nums.begin()+i+2,nums.begin()+j);
	}
	
	return nums.size();
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
	cout<<"the size of the array after removing duplicates"<<endl;
	cout<<removeDuplicates(v)<<endl;
	cout<<"contents of the array after removing the duplicates"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	return 0;   
}

