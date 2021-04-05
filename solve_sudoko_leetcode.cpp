#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool can_place(vector<vector<char>>&board,int i,int j,char ch){
	for(int k=0;k<board.size();k++){
		if(board[k][j]==ch){
			return false;
		}
	}
	for(int k=0;k<board.size();k++){
		if(board[i][k]==ch){
			return false;
		}
	}

	int n=sqrt(board.size());
	int starti=(i/n)*n;
	int startj=(j/n)*n;
	for(int i=starti;i<starti+n;i++){
		for(int j=startj;j<startj+n;j++){
			if(board[i][j]==ch){
				return false;
			}
		}
	}

	return true;
}
bool get(vector<vector<char>>& board,int i,int j){
	if(i>board.size()-1){
		return true;
	}
	if(j>board.size()-1){
		return get(board,i+1,0);
	}
	if(board[i][j]!='.'){
		return get(board,i,j+1);
	}
	for(int k=1;k<=9;k++){
		if(can_place(board,i,j,(char)(k+'0'))){
			board[i][j]=(char)(k+'0');
			if(get(board,i,j+1)){
				return true;
			}
		}
		board[i][j]='.';
	}
	return false;
}
void solveSudoku(vector<vector<char>>& board) {
	get(board,0,0);
}
int32_t main(){
	qubais_judge;
	IOS;
	return 0;
}