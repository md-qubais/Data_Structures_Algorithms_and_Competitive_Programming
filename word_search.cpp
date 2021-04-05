#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int visited[1000][1000]={0};
bool get(vector<vector<char>>&grid,int i,int j,int rows,int cols,string word){
	if(word.length()==0){
		return true;
	}
	if(i<0 or j<0 or i>rows or j>cols){
		return false;
	}
	if(visited[i][j]==1){
		return false;
	}
	visited[i][j]=1;
	if(grid[i][j]==word[0]){
		//explore the 4 paths
		bool up=get(grid,i-1,j,rows,cols,word.substr(1));
		bool down=get(grid,i+1,j,rows,cols,word.substr(1));
		bool right=get(grid,i,j+1,rows,cols,word.substr(1));
		bool left=get(grid,i,j-1,rows,cols,word.substr(1));
		if(up or right or left or down){
			return true;
		}
		}
	visited[i][j]=0;
	return false;
}
bool exist(vector<vector<char>>& board, string word){
	for(int i=0;i<board.size();i++){
		for(int j=0;j<board[i].size();j++){
			if(get(board,i,j,board.size()-1,board[i].size()-1,word)){
				return true;
			}
		}
	}
	return false;
}
int32_t main(){
	qubais_judge;
	IOS;
	int rows;
	int cols;
	cin>>rows>>cols;
	vector<vector<char>> str;
	for(int i=0;i<rows;i++){
		vector<char> res(cols);
		for(int j=0;j<cols;j++){
			cin>>res[j];
		}
		str.push_back(res);
	}
	string word;
	cin>>word;
	cout<<exist(str,word)<<endl;
	return 0;
}