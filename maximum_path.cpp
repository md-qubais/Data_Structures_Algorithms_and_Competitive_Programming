#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int visited[1000][1000]={0};
int get(vector<vector<int>>&grid,int i,int j,int rows,int cols,int sum){
	if(i<0 or j<0 or i>rows or j>cols){
		return sum;
	}
	if(grid[i][j]==0){
		return sum;
	}
	if(visited[i][j]==1){
		return sum;
	}
	visited[i][j]=1;
	int ans=max(get(grid,i+1,j,rows,cols,sum+grid[i][j]),max(get(grid,i,j+1,rows,cols,sum+grid[i][j]),max(get(grid,i-1,j,rows,cols,sum+grid[i][j]),get(grid,i,j-1,rows,cols,sum+grid[i][j]))));
	visited[i][j]=0;
	return ans;
}



int getMaximumGold(vector<vector<int>>& grid){
	int sum=0;
	for(int i=0;i<grid.size();i++){
		for(int j=0;j<grid[0].size();j++){
			sum=max(sum,get(grid,i,j,grid.size()-1,grid[0].size()-1,0));
		}
	}
	return sum;
}
int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	vector<vector<int>> grid;
	for(int i=0;i<rows;i++){
		vector<int> res(cols);
		for(int j=0;j<cols;j++){
			cin>>res[j];
		}
		grid.push_back(res);
	}
	cout<<getMaximumGold(grid)<<endl;
	return 0;   
}

