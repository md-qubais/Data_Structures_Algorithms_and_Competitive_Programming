#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int dp[1000][1000];
int paths(vector<vector<int>>&v,int rows,int cols,int i,int j){
	if(i>=rows){
		return 0;
	}
	if(j>=cols){
		return 0;
	}
	if(v[i][j]==1){
		return 0;
	}
	if(i==rows-1 and j==cols-1){
		return 1;
	}
	if(dp[i][j]==0){
		dp[i][j]=paths(v,rows,cols,i+1,j)+paths(v,rows,cols,i,j+1);
	}
	return dp[i][j];
}
int uniquePathsWithObstacles(vector<vector<int>>&v) {
	return paths(v,v.size(),v[0].size(),0,0);
}
int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	vector<vector<int>> v(rows);
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			int num;
			cin>>num;
			v[i].push_back(num);
		}
	}
	cout<<uniquePathsWithObstacles(v)<<endl;	
	return 0;   
}