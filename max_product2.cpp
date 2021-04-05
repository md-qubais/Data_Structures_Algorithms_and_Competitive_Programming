#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int helper(vector<vector<int>>&grid,int i,int j,int rows,int cols){
	if(){

	}
	if(i==rows and j==cols){
		return grid[i][j];
	}
	

}
int maxProductPath(vector<vector<int>>& grid){
	return helper(grid,0,0,grid.size()-1,grid[0].size()-1);
}
int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	vector<vector<int>> mat;
	for(int i=0;i<rows;i++){
		vector<int> arr(cols);
		for(int j=0;j<cols;j++){
			cin>>arr[j];
		}
		mat.push_back(arr);
	}
	cout<<maxProductPath(mat)<<endl;
	return 0;   
}