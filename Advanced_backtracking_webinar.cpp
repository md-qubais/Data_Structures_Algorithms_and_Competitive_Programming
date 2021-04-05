#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;

bool safe(int board[][10],int i,int j,int n){
int x=i;
int y=j;
while(x>=0){
if(board[x][y]==1){
return false;
}
x--;
}
x=i;
y=j;
while(x>=0 and y>=0){
if(board[x][y]==1){
return false;
}
x--;
y--;
}
x=i;
y=j;
while(x>=0 and y<n){
if(board[x][y]==1){
return false;
}
x--;
y++;
}
return true;
}

int ans=0;
int n_queen_problem(int board[][10],int i,int n){
if(i==n){
	ans++;
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
if(board[i][j]==1) cout<<"Q";
else cout<<".";	
	}
cout<<endl;
}
cout<<endl;
return 1;
}
int count=0;
for(int j=0;j<n;j++){
if(safe(board,i,j,n)){
board[i][j]=1;
count+=n_queen_problem(board,i+1,n);
}
board[i][j]=0;
}
return count;
}
bool n_queen(int board[][10],int row,int n){
if(row==n){
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
    if(board[i][j]==1){
cout<<"Q";
    }else{
    	cout<<".";
    }
	}
	cout<<endl;
}
cout<<endl;
//here return false coz we have to print all the 
//possible place that queen can be placed
//or false because that we are again bactracking everytime
//to get all the possible cases
return false;
}
for(int j=0;j<n;j++){
if(safe(board,row,j,n)){
board[row][j]=1;
bool canplace=n_queen(board,row+1,n);
if(canplace){
return true;
}
board[row][j]=0;
}
}
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
	int board[10][10]={0};
	cout<<n_queen_problem(board,0,n);
	return 0;     
}