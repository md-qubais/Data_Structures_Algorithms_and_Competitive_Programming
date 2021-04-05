#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//https://leetcode.com/problems/maximal-rectangle/
void sliding_window(vector<int>&arr,int k){
	deque<int> q;
	vector<int> ans;
	//first process k elements
	for(int i=0;i<k;i++){
		while(!q.empty() and arr[q.back()]<arr[i]){
			q.pop_back();
		}
		q.push_back(i);
	}
	//now process all the elements
	for(int i=k;i<arr.size();i++){
		ans.push_back(arr[q.front()]);
		//now remove unwanted elements
		while(!q.empty() and q.front()<=i-k){
			q.pop_front();
		}
		//now remove smallest elements
		while(!q.empty() and arr[q.back()]<arr[i]){
			q.pop_back();
		}
		q.push_back(i);
	}
	ans.push_back(arr[q.front()]);
	for(auto it: ans){
		cout<<it<<" ";
	}
	cout<<endl;
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
	int k;
	cin>>k;
	sliding_window(arr,k);
    return 0;
}