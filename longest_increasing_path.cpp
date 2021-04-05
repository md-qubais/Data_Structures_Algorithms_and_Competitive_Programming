#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
https://leetcode.com/problems/partition-list/
https://leetcode.com/problems/set-matrix-zeroes/
https://leetcode.com/problems/longest-increasing-path-in-a-matrix/
int visited[100][100]={0};
int ans(vector<vector<int>>&mat,int i,int j,int rows,int cols,string path,string p){	
	if(visited[i][j]!=0){
		return 0;
	}
	if(i<0 or j<0 or i>rows or j>cols){
		cout<<p<<endl;
		return 0;
	}
	if(path=="up"){
		if(mat[i-1][i]>mat[i][j]){
			return 0;
		}
	}else if(path=="down"){
		if(mat[i+1][j]>mat[i][j]){
			return 0;
		}
	}else if(path=="right"){
		if(mat[i][j+1]>mat[i][j]){
			return 0;
		}
	}else if(path=="left"){
		if(mat[i][j-1]>mat[i][j]){
			return 0;
		}
	}
	    int ans1=0;
		int ans2=0;
		int ans3=0;
		int ans4=0;
		int a=0;
		visited[i][j]=1;
	for(int i1=i;i1<=rows;i1++){
		for(int j1=j;j1<=cols;j1++){
			visited[i1][j1]=1;
			ans1=max(ans1,ans(mat,i1,j1+1,rows,cols,"left",p+" "+to_string(mat[i][j])));
			ans2=max(ans2,ans(mat,i1+1,j1,rows,cols,"up",p+" "+to_string(mat[i][j])));
			ans3=max(ans3,ans(mat,i1,j1-1,rows,cols,"right",p+" "+to_string(mat[i][j])));
			ans4=max(ans4,ans(mat,i1-1,j1,rows,cols,"down",p+" "+to_string(mat[i][j])));
		}
		a=max(ans1,max(ans2,max(ans3,ans4)));
	}
	visited[i][j]=0;
	return a+1;
}
int longestIncreasingPath(vector<vector<int>>& matrix){
	return ans(matrix,0,0,matrix.size()-1,matrix[0].size()-1,"","");
}
int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	vector<vector<int>> mat;
	for(int i=0;i<rows;i++){
		vector<int> col(cols);
		for(int j=0;j<cols;j++){
			cin>>col[j];
		}
		mat.push_back(col);
	}
	cout<<longestIncreasingPath(mat)<<endl;
	return 0;   
}