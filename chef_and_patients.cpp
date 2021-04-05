#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		vector<int> arr(num);
		int Max=INT_MIN;
		for(int i=0;i<num;i++){
			cin>>arr[i];
			Max=max(Max,arr[i]);
		}
		vector<int> temp=arr;
		sort(temp.begin(),temp.end(),greater<int>{});
		vector<pair<int,int>> p;
		int count=0;
		for(auto it:temp){
			p.push_back(make_pair(it,++count));
		}
		vector<deque<int>> v(Max+1);
		for(auto it:p){
			v[it.first].push_back(it.second);
		}
		for(auto it:arr){
			cout<<v[it].front()<<" ";
			v[it].pop_front();
		}
		cout<<endl;
	}
	return 0;   
}