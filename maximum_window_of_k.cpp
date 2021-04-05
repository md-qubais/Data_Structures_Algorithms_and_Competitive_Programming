#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


vector<int> maxSlidingWindow(vector<int>&v, int k){
	vector<int> ans;
	//first for value and the second for index
	priority_queue<pair<int,int>> pq;
	int i=0;
	//first process the k elements
	while(i<=k-1){
		pq.push(make_pair(v[i],i));
		i++;
	}
	while(i<v.size()){
		ans.push_back(pq.top().first);
		//now remove the unwanted 
		while(pq.top().second<(i-k+1) and !pq.empty()){
			pq.pop();
		}
		pq.push(make_pair(v[i],i));
		i++;
	}
	if(!pq.empty()){
	ans.push_back(pq.top().first);
	}
	return ans;
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
	int k;
	cin>>k;
	vector<int> ans=maxSlidingWindow(v,k);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}