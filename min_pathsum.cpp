#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//below is recursin+ memoization
/*
int dp[100][100]={0};
int get(vector<vector<int>>&grid,int i,int j,int rows,int cols){
	if(i>rows or j>cols){
		return INT_MAX;
	}
	if(i==rows and j==cols){
		return grid[i][j];
	}
	if(dp[i][j]!=0){
		return dp[i][j];
	}
	dp[i][j]=grid[i][j]+min(get(grid,i+1,j,rows,cols),get(grid,i,j+1,rows,cols));
	return dp[i][j];
}
int minPathSum(vector<vector<int>>& grid){
	return get(grid,0,0,grid.size()-1,grid[0].size()-1);
}*/
int minPathSum(vector<vector<int>>&grid){
	int rows=grid.size()-1;
	int cols=grid[0].size()-1;
	int dp[100][100]={0};
	//filling last column and filling last row
	dp[rows][cols]=grid[rows][cols];
	for(int i=rows-1;i>=0;i--){
		dp[i][cols]=grid[i][cols]+dp[i+1][cols];
	}
	for(int i=cols-1;i>=0;i--){
		dp[rows][i]=grid[rows][i]+dp[rows][i+1];
	}
	for(int i=rows-1;i>=0;i--){
		for(int j=cols-1;j>=0;j--){
			dp[i][j]=grid[i][j]+min(dp[i+1][j],dp[i][j+1]);
		}
	}
	return dp[0][0];
}
int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	vector<vector<int>> grid;
	for(int i=0;i<rows;i++){
		vector<int> row(cols);
		for(int j=0;j<cols;j++){
			cin>>row[j];
		}
		grid.push_back(row);
	}
	cout<<minPathSum(grid)<<endl;
	return 0;   
}