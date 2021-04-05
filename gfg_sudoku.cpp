// { Driver Code Starts
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)

using namespace std;

// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  

bool SolveSudoku(int grid[N][N]);

void printGrid(int grid[N][N]);

int main() {
	qubais_judge;
	IOS;	
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		
		if (SolveSudoku(grid) == true)  
            printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}// } Driver Code Ends

bool can_place(int grid[N][N],int n,int i,int j,int number){
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




bool solve_sudoku(int grid[N][N],int n,int i,int j){
	if(i==n){
	    //printGrid(grid);
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
bool SolveSudoku(int grid[N][N])  
{ 
    // Your code here
    return solve_sudoku(grid,N,0,0);
}

void printGrid (int grid[N][N]) 
{
    // Your code here 
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
