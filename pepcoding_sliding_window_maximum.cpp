#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void sliding_window_maximum(vector<int> &v,int k){
	vector<pair<int,int>> temp;
	stack<pair<int,int>> s;
	for(int i=v.size()-1;i>=0;i--){
		while(!s.empty() and s.top().first<v[i]){
			s.pop();
		}
		if(s.empty()){
			temp.push_back(make_pair(v[i],i));
		}else{
			temp.push_back(s.top());
		}
		s.push(make_pair(v[i],i));
	}
	reverse(temp.begin(),temp.end());
	for(int i=0;i<v.size()-k+1;i++){
		int prev=i;
		int j=temp[i].second;
		while(j!=prev and temp[j].second-i<k){
			prev=j;
			j=temp[j].second;
		}
		if(temp[prev].second-i<k)
		cout<<temp[prev].first<<endl;
	else cout<<v[i]<<endl; 
	}
	cout<<endl;
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
	sliding_window_maximum(v,k);
    return 0;
}