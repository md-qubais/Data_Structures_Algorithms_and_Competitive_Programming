#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<string> mat(n);
	for(int i=0;i<mat.size();i++){
		cin>>mat[i];
	}
	stack<int> s;
	for(int i=0;i<n;i++){
		s.push(i);
	}
	while(s.size()>1){
		int i=s.top();
		s.pop();
		int j=s.top();
		s.pop();
		if(mat[i][j]=='0'){
			s.push(i);
		}else{
			s.push(j);
		}
	}
	int c=s.top();
	for(int i=0;i<n;i++){
		if(i==c){
			continue;
		}
		if(mat[c][i]=='1' or mat[i][c]=='0'){
			cout<<"none"<<endl;
			return 0;
		}
	}
	if(mat[c][c]=='0'){
		cout<<"none";
		return 0;
	}
	cout<<c<<endl;
	return 0;
}