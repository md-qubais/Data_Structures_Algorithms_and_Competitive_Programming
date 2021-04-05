#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

bool can_place(int arr[][1000],int i,int j,int n,int number){
	//that number should not present in that row or that column
	for(int k=0;k<n;k++){
		if(arr[k][j]==number or arr[i][k]==number){
			return false;
		}
	}
	//now checking in that small box
	//i==->(i/sqrt(n))*sqrt(n)
	//j==->(j/sqrt(n))*sqrt(n)
	n=sqrt(n);
	int starti=(i/n)*n;
	int startj=(j/n)*n;
	for(int i=starti;i<starti+n;i++){
		for(int j=startj;j<startj+n;j++){
			if(arr[i][j]==number){
				return false;
			}
		}
	}
	return true;
}




bool solve(int grid[][1000],int i,int j,int n){
	if(i==n){
		//print the sudoko
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<grid[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	if(j==n){
		return solve(grid,i+1,0,n);
	}
	if(grid[i][j]!=0){
		return solve(grid,i,j+1,n);
	}

	for(int number=1;number<=n;number++){
		if(can_place(grid,i,j,n,number)){
			grid[i][j]=number;
			bool can_solve_next=solve(grid,i,j+1,n);
			if(can_solve_next){
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
         solve(grid,0,0,n);
	return 0;   
}