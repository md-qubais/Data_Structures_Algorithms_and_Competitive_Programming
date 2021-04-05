#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool can_stay(vector<vector<char>>& board,int i,int j){
int n=board.size();
char ch=board[i][j];
for(int k=0;k<n;k++){
	if(k==i and j==j){
		continue;
	}
		if(board[k][j]==ch){
			return false;
		}
	}

for(int k=0;k<n;k++){
	if(k==j and i==i){
		continue;
	}
		if(board[i][k]==ch){
			return false;
		}
	}
	n=sqrt(n);
	int starti=(i/n)*n;
	int startj=(j/n)*n;
	for(int i1=starti;i1<starti+n;i1++){
		for(int j1=startj;j1<startj+n;j1++){
			if(i1==i and j1==j){
				continue;
			}
			if(board[i1][j1]==ch){
				return false;
			}
		}
	}
	return true;
}
bool check(vector<vector<char>>& board,int i,int j){
	if(i>board.size()-1){
		return true;
	}
	if(j>board.size()-1){
		return check(board,i+1,0);
	}
	if(board[i][j]=='.'){
		return check(board,i,j+1);
	}
	if(can_stay(board,i,j)){
		if(check(board,i,j+1)){
			return true;
		}
	}
	return false;
}
bool isValidSudoku(vector<vector<char>>& board){
	return check(board,0,0);
}

int32_t main(){
	qubais_judge;
	IOS;
	return 0;
}