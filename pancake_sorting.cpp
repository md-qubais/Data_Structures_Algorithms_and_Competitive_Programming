#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
https://leetcode.com/problems/circular-array-loop/
https://leetcode.com/problemset/all/
https://leetcode.com/problems/number-of-ways-to-split-a-string/
https://leetcode.com/problems/burst-balloons/
https://leetcode.com/problems/counting-bits/
https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/
https://leetcode.com/problems/russian-doll-envelopes/
https://leetcode.com/problems/pancake-sorting/



void reverse(int i,int j,vector<int>&arr){
	while(i<j){
		swap(arr[i++],arr[j--]);
	}
}
vector<int> pancakeSort(vector<int>& arr){
	vector<int> ans;
	int i=arr.size()-1;
	ans.push_back(arr.size());
	i--;
	while(i>=0){
		if(arr[i]-1==i){
			i--;
		}else{
			if(i==0){
				if(i==arr[i]-1){
					i--;
				}else{
					ans.push_back(arr[i]);
					i=arr.size()-1;
				}
			}
			else{
				reverse(0,i,arr);
				ans.push_back(i+1);
				i--;
			}
		}
	}
	return ans;
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
	vector<int> ans=pancakeSort(arr);
	for(auto it: ans){
		cout<<it<<" ";
	}
	return 0;   
}