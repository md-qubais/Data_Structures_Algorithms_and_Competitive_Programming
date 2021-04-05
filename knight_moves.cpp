#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
const int D=10;
//now here we are going to use 
//use to array which are rowdirection and coldirection
//to go and traverse among the direction 
int rowdir[]={+2,+1,-1,-2,-2,-1,+1,+2};
int coldir[]={+1,+2,+2,+1,-1,-2,-2,-1};
  
bool can_move(int board[D][D],int n,int row,int col){
    if(row<n and row>=0 and col<n and col>=0 and board[row][col]==0){
       return true;
    }
      return false;
  }
bool solve_knight(int board[D][D],int n,int move_no,int row,int col){
  	//now below we are traversing the directions
  
    if(move_no==(n*n)){
         for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
             cout<<board[i][j]<<" ";
          }
          cout<<endl;
         }
         cout<<endl;
         return false;
    }
    for(int curr=0;curr<8;curr++){
       int nextrow=rowdir[curr]+row;
       int nextcol=coldir[curr]+col;
       if(can_move(board,n,nextrow,nextcol)){
           board[nextrow][nextcol]=move_no+1;
          bool isSuccess=solve_knight(board,n,move_no+1,nextrow,nextcol);
        if(isSuccess){
            return true;
        }
        board[nextrow][nextcol]=0;//back tracking step 
        //or erasing the move no
       }      
  	}
    return false;
}

int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int board[D][D]={0};
	//here we are placing the knight at the very first
	//position 0,0 and marking it as 1 as we have solved the
	//1th move 
	board[0][0]=1;
    //now here we are taking the board dimensions as input
    int n;
    cin>>n;
   solve_knight(board,n,1,0,0);
    //the paramter are as follow 
    //given board and its dimensions
    //and the place of 2-D that we the knight is standing
    //in the present position
  
	return 0;     
}