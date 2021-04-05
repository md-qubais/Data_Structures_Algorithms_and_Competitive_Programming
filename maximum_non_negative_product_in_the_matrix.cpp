#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
https://leetcode.com/problems/maximum-non-negative-product-in-a-matrix/
https://leetcode.com/problems/count-sorted-vowel-strings/
https://leetcode.com/problems/palindromic-substrings/
https://leetcode.com/problems/minimum-cost-for-tickets/
/*
4 3
-1 -4 2
4 3 -1
2 -4 4
1 -1 -4
*/
int highest[100][100]={-1};
int lowest[100][100]={-1};
int helper(vector<vector<int>>&grid,int i,int j,int rows,int cols){
	if(i>rows or j>cols ){
		return INT_MIN;
	}
	if(i==rows and j==cols){
		return grid[i][j];
	}
	int ans1=helper(grid,i,j+1,rows,cols);
	int ans2=helper(grid,i+1,j,rows,cols);
	highest[i][j]=max(ans1,ans2);
	lowest[i][j]=min(ans1,ans2);
	cout<<highest[i][j]<<" "<<lowest[i][j]<<endl;
	if(lowest[i][j]==INT_MIN){
		return highest[i][j]*grid[i][j];
	}
	return highest[i][j]*grid[i][j]>lowest[i][j]*grid[i][j]?highest[i][j]*grid[i][j]:lowest[i][j]*grid[i][j];
}


int maxProductPath(vector<vector<int>>& grid){
	int ans=helper(grid,0,0,grid.size()-1,grid[0].size()-1);
	return  highest[0][0];
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
	cout<<maxProductPath(grid)<<endl;
	return 0;   
}