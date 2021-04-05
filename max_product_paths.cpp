#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	vector<vector<int>> mat;
	for(int i=0;i<rows;i++){
		vector<int> ans(cols);
		for(int j=0;j<cols;j++){
			cin>>ans[j];
		}
		mat.push_back(ans);
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;   
}