#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int visited[1000][1000]={0};
void get(vector<vector<int>>&grid,int i,int j,int rows,int cols,int z_count,int count,int &ans){
	if(i<0 or j<0 or i>rows or j>cols){
		return;
	}

	if(visited[i][j]==1){
		return;
	}
	if(grid[i][j]==-1){
		return;
	}
	if(grid[i][j]==2){
		//got the answer
		if(z_count==count+1){
			ans++;
		}
		return;
	}

	visited[i][j]=1;
	get(grid,i,j+1,rows,cols,z_count+1,count,ans);
	get(grid,i+1,j,rows,cols,z_count+1,count,ans);
	get(grid,i-1,j,rows,cols,z_count+1,count,ans);
	get(grid,i,j-1,rows,cols,z_count+1,count,ans);
	visited[i][j]=0;
	return;
}
int uniquePathsIII(vector<vector<int>>& grid) {
	int row,col;
	bool b=false;
	int count=0;
	for(int i=0;i<grid.size();i++){
		for(int j=0;j<grid[0].size();j++){
			if(grid[i][j]==0){
				count++;
			}
			if(grid[i][j]==1){
				row=i;
				col=j;
				
			}
		}
	}
	int ans=0;
	get(grid,row,col,grid.size()-1,grid[0].size()-1,0,count,ans);
	return ans;
}

int32_t main(){
	qubais_judge;
	IOS;
	int rows;
	int cols;
	cin>>rows>>cols;
	vector<vector<int>> ans;
	for(int i=0;i<rows;i++){
		vector<int> res(cols);
		for(int j=0;j<cols;j++){
			cin>>res[j];
		}
		ans.push_back(res);
	}	
	cout<<uniquePathsIII(ans)<<endl;
	return 0;
}