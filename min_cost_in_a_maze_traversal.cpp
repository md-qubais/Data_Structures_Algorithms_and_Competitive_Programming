#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//3035
//recursive and memoization tech are giving tle
int dp[1000][1000]={0};
int get_min(vector<vector<int>>&mat,int i,int j,int asf){
	
	if(i==mat.size()-1 and j==mat[0].size()-1){
		dp[i][j]=min(dp[i][j],asf+mat[i][j]);
		return dp[i][j];
	}
	if(i>mat.size()-1 or j>mat[0].size()-1){
		return INT_MAX;
	}
	if(dp[i][j]!=0 and dp[i][j]<=asf){
		return dp[i][j];
	}
	dp[i][j]=min(get_min(mat,i+1,j,asf+mat[i][j]),get_min(mat,i,j+1,asf+mat[i][j]));
	return dp[i][j];
}


//here bottom up approach is the most
//efficient way to clear the 
//submission and getting accepted 

int min_cost(vector<vector<int>>&matrix){
	dp[matrix.size()-1][matrix[0].size()-1]=INT_MAX;
	return get_min(matrix,0,0,0);
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