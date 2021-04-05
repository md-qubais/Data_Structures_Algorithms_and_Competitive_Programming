#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void sliding_window(int *arr,int n,int k){
	vector<int> res;
	//pair<int,int> first for value and the second for index
	deque<pair<int,int>> q;
	//first process k elements
	for(int i=0;i<k;i++){
		//here remove the smaller elements
		while(!q.empty() and q.back().first<arr[i]){
			q.pop_back();
		}
		q.push_back(make_pair(arr[i],i));
	}
	for(int i=k;i<n;i++){
		res.push_back(q.front().first);
		//remove unwanted elements
		while(!q.empty() and q.front().second+k<=i){
			q.pop_front();
		}
		//remove the smallest elements
		while(!q.empty() and q.back().first<arr[i]){
			q.pop_back();
		}
		q.push_back(make_pair(arr[i],i));
	}
	res.push_back(q.front().first);

	for(auto it: res){
		cout<<it<<endl;
	}
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	sliding_window(arr,n,k);
    return 0;
}