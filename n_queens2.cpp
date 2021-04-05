#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int board[1000][1000]={0};
bool can_place(int i,int j,int rows){
	int i1=i;
	while(i1>=0){
		if(board[i1--][j]==1){
			return false;
		}
	}
	i1=i;
	int j1=j;
	while(i1>=0 and j1>=0){
		if(board[i1--][j1--]==1){
			return false;
		}
	}
	i1=i;
	j1=j;
	while(i1>=0 and j1<=rows){
		if(board[i1--][j1++]==1){
			return false;
		}
	}
	return true;
}


void solve(int i,int rows,int &ans){
	if(i>rows ){
		ans++;
		return;
	}
	for(int k=0;k<=rows;k++){
		if(can_place(i,k,rows)){
			board[i][k]=1;
			solve(i+1,rows,ans);
		}
		board[i][k]=0;
	}

}
int solveNQueens(int n) {
        int ans=0;
        solve(0,n-1,ans);
        return ans;
 }
int32_t main(){
	qubais_judge;
	IOS;
	cout<<solveNQueens(4)<<endl;
	return 0;   
}