#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
const int no=10000000;
bitset<no> col,d1,d2;
//by default the values are stored in the bitset class
//are zero
void n_queen_solve_using_bitsets(int r,int n,int &ans,int board[][10]){
if(r==n){
ans++;
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
return ;
}
for(int c=0;c<n;c++){
if( !col[c] and !d1[r+c] and !d2[r-c+n-1]){
	col[c]=d1[r+c]=d2[r-c+n-1]=board[r][c]=1;
	n_queen_solve_using_bitsets(r+1,n,ans,board);
col[c]=d1[r+c]=d2[r-c+n-1]=board[r][c]=0;
}
}
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
	int ans=0;
	int board[10][10]={0};
	n_queen_solve_using_bitsets(0,n,ans,board);
	cout<<ans<<endl;
	return 0;     
}