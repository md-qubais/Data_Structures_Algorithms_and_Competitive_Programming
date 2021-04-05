#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//below is the top down approach
//this is 2d dynamic programming concept
//get profit is the function name
int get(int *wines,int i,int j,int y,int dp[][100]){
	//base case
	if(i>j){
		return 0;
	}
	if(dp[i][j]!=0){
     return dp[i][j];
	}
	int op1=wines[i]*y + get(wines,i+1,j,y+1,dp);
	int op2=wines[j]*y + get(wines,i,j-1,y+1,dp);
	dp[i][j]=max(op1,op2);
	return dp[i][j];
}



int32_t main(){
	qubais_judge;
	IOS;
	int dp[100][100]={0};
	int wines[]={2,3,5,1,4};//if we use greedy it will 49 X
	int n=sizeof(wines)/sizeof(int);
    cout<<get(wines,0,n-1,1,dp)<<endl;
	return 0;    
}