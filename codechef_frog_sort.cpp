#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool present(map<int,int>&m,int x){
	int count=0;
	for(auto it:m){
		if(it.first<x and it.second<m[x]){
			count++;
		}
	}
	return count==x-1;
}
int get_ans(vector<int>&w,vector<int>&l){
	map<int,int>m;
	map<int,int>steps;
	for(int i=0;i<w.size();i++){
		m[w[i]]=i;
		steps[w[i]]=l[i];
	}
	int c=0;
	sort(w.begin(),w.end());
	for(int i=1;i<w.size();i++){
		while(!present(m,w[i])){
			c++;
			m[w[i]]+=steps[w[i]];
		}
	}
	return c;

}
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> l(n);
		vector<int> w(n);
		for(int i=0;i<n;i++){
			cin>>w[i];
		}
		for(int i=0;i<n;i++){
			cin>>l[i];
		}
		cout<<get_ans(w,l);
		cout<<endl;
	}
	return 0;   
}