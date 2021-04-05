#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
bool canPlace(int mat[][9],int i,int j,int n,int number){
//row and cols check
for(int x=0;x<n;x++){
if(mat[x][j]==number or mat[i][x]==number){
return false;
}
}
int rn=sqrt(n);
int sx=(i/rn)*rn;
int sy=(j/rn)*rn;
for(int x=sx;x<sx+rn;x++){
	for(int y=sy;y<sy+rn;y++){
     if(mat[x][y]==number){
return false;
           }
    	}
    }
    return true;
}



bool sudoku(int mat[][9],int i,int j,int n){
//base case
if(i==n){
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
   cout<<mat[i][j]<<" ";
	}
	cout<<endl;
}
return true;

}
//case row end
if(j==n){
return sudoku(mat,i+1,0,n);
}
//skip the pre filled cell
if(mat[i][j]!=0){
return sudoku(mat,i,j+1,n);
}

//recursive case
//fill the current non filled cell
//or the zero cell with the possible options
for(int number=1;number<=n;number++){
if(canPlace(mat,i,j,n,number)){
mat[i][j]=number;
bool couldwesolve=sudoku(mat,i,j+1,n);
if(couldwesolve==true){
return true;
}
}
}
//we cant solve suduko with the current cell
//back track
mat[i][j]=0;
return false;
}   

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int n=9;
	int mat[9][9]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
      cin>>mat[i][j]; 
		}
	} 
		sudoku(mat,0,0,n);
	return 0;     
}