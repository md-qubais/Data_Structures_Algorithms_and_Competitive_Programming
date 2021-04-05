#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int visited[100][100]={0};
int get_ans(vector<vector<int>>&mat,int i,int j,int rows,int cols,string path,string p){
	if(i<0 or j<0 or i>rows or j>cols){
		cout<<path<<endl;
		return 0;
	}
	if(visited[i][j]!=0){
		return 0;
	}
	visited[i][j]=1;
	if(p=="down"){
		if(mat[i+1][j]>mat[i][j]){
		visited[i][j]=0;
		return 0;
	}
	}else if(p=="up"){	
		if(mat[i-1][j]>mat[i][j]){
		visited[i][j]=0;
		return 0;
	}
	}else if(p=="right"){

		if(mat[i][j+1]>mat[i][j]){
		visited[i][j]=0;
		return 0;
	}
	}else if(p=="left"){
		if(mat[i][j-1]>mat[i][j]){
		visited[i][j]=0;
		return 0;
	}
	}
	for(int i1=i;i1<=rows;i1++){
		for(int j1=j;j1<=cols;j1++){
			get_ans(mat,i1-1,j1,rows,cols,path+" "+to_string(mat[i1][j1]),"down");

	    	get_ans(mat,i1+1,j1,rows,cols,path+" "+to_string(mat[i1][j1]),"up");

			get_ans(mat,i1,j1+1,rows,cols,path+" "+to_string(mat[i1][j1]),"left");

			get_ans(mat,i1,j1-1,rows,cols,path+" "+to_string(mat[i1][j1]),"right");
		
		}
	}
	visited[i][j]=0;
	return 0;
}
int longestIncreasingPath(vector<vector<int>>&mat){
	return get_ans(mat,0,0,mat.size()-1,mat[0].size()-1,"","");
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