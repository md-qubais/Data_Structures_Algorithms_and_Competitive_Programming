#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int min_cost(vector<vector<int>>&mat){
	int dp[mat.size()][mat[0].size()]={0};
	for(int i=0;i<mat.size();i++){
		for(int j=0;j<mat[i].size();j++){
			if(i-1<0 and j-1<0){
				dp[i][j]=mat[i][j];
				continue;
			}
			//uppar ka nikal gaya
			if(i-1<0){
				dp[i][j]=dp[i][j-1]+mat[i][j];
			}
			//neeche ka nikal gaya
			else if(j-1<0){
				dp[i][j]=dp[i-1][j]+mat[i][j];
			}else{
				dp[i][j]=min(dp[i][j-1],dp[i-1][j])+mat[i][j];
			}
		}
	}
		return dp[mat.size()-1][mat[0].size()-1];
}
int32_t main(){
	qubais_judge;
	IOS;
	int rows;
	int cols;
	cin>>rows>>cols;
	vector<vector<int>> mat;
	for(int i=0;i<rows;i++){
		vector<int> r(cols);
		for(int j=0;j<cols;j++){
			cin>>r[j];
		}
		mat.push_back(r);
	}
	cout<<min_cost(mat);
	return 0;
}