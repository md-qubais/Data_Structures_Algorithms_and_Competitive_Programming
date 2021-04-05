#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   

bool isSafe(int boards[][10],int i,int j,int n){
//you can check for the column
	for(int row=0;row<i;row++){
          if(boards[row][j]==1){
              return false;
          }
	}
//you can check for the left diagonal
	int x=i;
	int y=j;
	while(x>=0 and y>=0){
          if(boards[x][y]==1){
             return false;
          }
          x--;
          y--;
	}
//you can check for the right diagonal       
       x=i;
       y=j;
	while(x>=0 and y<n){
          if(boards[x][y]==1){
             return false;
          }
          x--;
          y++;
	}


return true;
}


bool solve_n_queen(int boards[][10],int i,int n){
if(i==n){
//we successfully solved n quees problem
//now we are going to print the multidimensional array	
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
 if(boards[i][j]==1){
cout<<"Q";
 }else{
 	cout<<".";
 }
	}
	cout<<endl;
}
cout<<endl;
//if i write here false so then i will get 
//all the configurations of the n queen

return true;
}
//try to place the queens in the current 
//row and the current column
for(int j=0;j<n;j++){
//you have to check if i and j position 
//is safe to place the queen or not
if(isSafe(boards,i,j,n)){
boards[i][j]=1;
bool canplacequeen=solve_n_queen(boards,i+1,n);
if(canplacequeen){
return true;
}
boards[i][j]=0;
}	
}
//tried all position in the current row 
//can place queen in the current row
return false;
}

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int n;
	cin>>n;
	int boards[10][10]={0};
	solve_n_queen(boards,0,n);
	return 0;     
}