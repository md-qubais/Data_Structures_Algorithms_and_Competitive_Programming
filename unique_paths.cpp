#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//here we have to use the dynamic programming
//to store the elements of the unique paths
int dp[1000][1000]={0};
int paths(int i,int j,int rows,int cols){
	if(i==rows and j==cols){
		return 1;
	}
	if(i>rows ){
		return 0;
	}
	if(j>cols){
		return 0;
	}
	if(dp[i][j]==0){
		dp[i][j]=paths(i,j+1,rows,cols)+paths(i+1,j,rows,cols);
	}
	return dp[i][j];
}
int uniquePaths(int m, int n) {
	return paths(1,1,m,n);
}
int32_t main(){
	qubais_judge;
	IOS;
	int m;
	int n;
	cin>>m>>n;
	cout<<uniquePaths(m,n)<<endl;
	return 0;   
}