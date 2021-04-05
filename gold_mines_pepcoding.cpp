#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int dp[100][100]={0};
int get(int arr[][100],int i,int j,int rows,int cols){
    cout<<i<<" "<<j<<endl;
    if(i<0  or i>rows){
        return INT_MIN;
    }
    if(j==cols){
    	dp[i][j]=arr[i][j];
    	return dp[i][j];
    }
    if(dp[i][j]!=0){
    	return dp[i][j];
        }
    int ans1=get(arr,i-1,j+1,rows,cols);
    int ans3=get(arr,i,j+1,rows,cols);
    int ans2=get(arr,i+1,j+1,rows,cols);
    dp[i][j]=arr[i][j]+max(ans1,max(ans2,ans3));
    return dp[i][j];
}


int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	int arr[100][100]={0};
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
		}
	}
    int ans=INT_MIN;
    for(int i=0;i<rows;i++){
        ans=max(ans,get(arr,i,0,rows-1,cols-1));
    }
    cout<<ans<<endl;
	return 0;   
}