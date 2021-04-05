#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int dp[8][8]={0};
void upper_left_diagonal(vector<vector<int>> &ans,int i,int j){
	
	while(i>=0 and j>=0){
		if(dp[i][j]==1){
			vector<int> temp(2);
			temp[0]=i;
			temp[1]=j;
			ans.push_back(temp);
			break;
		}
		i--;
		j--;
	}
}
void upper_row(vector<vector<int>> &ans,int i,int j){
	while(i>=0){

		if(dp[i][j]==1){
			vector<int> temp(2);
			temp[0]=i;
			temp[1]=j;
			ans.push_back(temp);
			break;
		}
		i--;
	}
}
void upper_right_diagonal(vector<vector<int>> &ans,int i,int j){
	while(i>=0 and j<8){

		if(dp[i][j]==1){
			vector<int> temp(2);
			temp[0]=i;
			temp[1]=j;
			ans.push_back(temp);
			break;
		}
		i--;
		j++;
	}
}
void right_cols(vector<vector<int>> &ans,int i,int j){
	while(j<8){
	if(dp[i][j]==1){
			vector<int> temp(2);
			temp[0]=i;
			temp[1]=j;
			ans.push_back(temp);
			break;
		}	
		j++;
	}
}
void lower_right_diagonal(vector<vector<int>> &ans,int i,int j){
	while(i<8 and j<8){
		if(dp[i][j]==1){
			vector<int> temp(2);
			temp[0]=i;
			temp[1]=j;
			ans.push_back(temp);
			break;
		}
		i++;j++;
	}
}
void lower_row(vector<vector<int>> &ans,int i,int j){
	while(i<8){
		if(dp[i][j]==1){
			vector<int> temp(2);
			temp[0]=i;
			temp[1]=j;
			ans.push_back(temp);
			break;
		}
		i++;
	}
}
void lower_left_diagonal(vector<vector<int>> &ans,int i,int j){
	while(i<8 and j>=0){
		if(dp[i][j]==1){
			vector<int> temp(2);
			temp[0]=i;
			temp[1]=j;
			ans.push_back(temp);
			break;
		}
		i++;
		j--;
	}
}
void left_cols(vector<vector<int>> &ans,int i,int j){
	while(j>=0){
		if(dp[i][j]==1){
			vector<int> temp(2);
			temp[0]=i;
			temp[1]=j;
			ans.push_back(temp);
			break;
		}
		j--;
	}
}
vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
	vector<vector<int>> ans;
	for(int i=0;i<queens.size();i++){
		dp[queens[i][0]][queens[i][1]]=1;
	}
	int i=king[0];
	int j=king[1];
	upper_left_diagonal(ans,i,j);
	upper_row(ans,i,j);
	upper_right_diagonal(ans,i,j);
	right_cols(ans,i,j);
	lower_right_diagonal(ans,i,j);
	lower_row(ans,i,j);
	lower_left_diagonal(ans,i,j);
	left_cols(ans,i,j);
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	return 0;   
}