#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool can_place(int grid[][1000],int n,int i,int j,int number){
	for(int k=0;k<n;k++){
		if(grid[k][j]==number or grid[i][k]==number){
			return false;
		}
	}
	n=sqrt(n);
	i=(i/n)*n;
	j=(j/n)*n;
	for(int starti=i;starti<i+n;starti++){
		for(int startj=j;startj<j+n;startj++){
			if(grid[starti][startj]==number){
				return false;
			}
		}
	}


	return true;
}




bool solve_sudoku(int grid[][1000],int n,int i,int j){
	if(i==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<grid[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	if(j>=n){
		return solve_sudoku(grid,n,i+1,0);
	}
	if(grid[i][j]!=0){
		return solve_sudoku(grid,n,i,j+1);
	}
	for(int number=1;number<=n;number++){
		if(can_place(grid,n,i,j,number)){
			grid[i][j]=number;
			if(solve_sudoku(grid,n,i,j+1)){
				return true;
			}
		}
		grid[i][j]=0;
	}

	return false;
}



int32_t main(){
	qubais_judge;
	IOS;	
	int grid[][1000] = { {3, 0, 6, 5, 0, 8, 4, 0, 0}, 
         {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
         {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
         {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
         {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
         {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
         {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
         {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
         {0, 0, 5, 2, 0, 6, 3, 0, 0} };
         int n=9;
    solve_sudoku(grid,9,0,0);
	return 0;   
}