#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int rowdir[]={+2,+1,-1,-2,-2,-1,+1,+2};
int coldir[]={+1,+2,+2,+1,-1,-2,-2,-1};
bool can_place(vector<vector<char>>&mat,int row,int col,int n){
	for(int i=0;i<8;i++){
		int r1=row+rowdir[i];
		int c1=col+coldir[i];
		if(r1<0 or c1<0 or r1>=n or c1>=n){
			continue;
		}
		if(mat[r1][c1]=='1'){
			return false;
		}
	}
	return true;
}
void knight(vector<vector<char>>mat,int n,int rows,int cols,int k){
	//if k knights can be placed
	if(k==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(mat[i][j]=='1'){
					cout<<i<<"-"<<j<<", ";
				}
			}
		}
		cout<<"."<<endl;
		return;
	}
	//if rows overshoot the given n(rows) values
	if(rows>=n){
		return;
	}
	

	//iterating all the cols of given row
	for(int j=cols;j<=n;j++){
		//if the cols overshoot
		if(j==n){
			//calling for the next row
			knight(mat,n,rows+1,0,k);
			return;
		}
		//can place function to identify that
		//the knight is safe if placed in that cell
		if(can_place(mat,rows,j,n)){
			mat[rows][j]='1';
			knight(mat,n,rows,j+1,k+1);
			//mat[rows][j]='0'//backtracking step can be written here also
		}
		//backtracking step
		mat[rows][j]='0';
	}

	return;
}
void solve(vector<vector<char>> mat,int n){
	//helper function to solve problem
	knight(mat,n,0,0,0);
}

//main function
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<vector<char>> mat;
	for(int i=0;i<n;i++){
		vector<char> col(n);
		for(int j=0;j<n;j++){
			col[j]='0';

		}
		mat.push_back(col);
	}
	solve(mat,n);
    return 0;
}