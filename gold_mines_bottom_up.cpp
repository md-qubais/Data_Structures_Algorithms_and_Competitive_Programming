#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
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
    int dp[rows][cols]={0};
    for(int i=0;i<rows;i++){
        dp[i][cols-1]=arr[i][cols-1];
    }
    for(int j=cols-2;j>=0;j--){
        for(int i=0;i<rows;i++){
            if(i==0){
                dp[i][j]=arr[i][j]+max(dp[i+1][j+1],dp[i][j+1]);
            }else if(i==rows-1){
                dp[i][j]=arr[i][j]+max(dp[i-1][j+1],dp[i][j]);
            }else{
                dp[i][j]=arr[i][j]+max(dp[i+1][j+1],max(dp[i-1][j+1],dp[i][j+1]));
            }
        }
    }
    int ans=INT_MIN;
    for(int i=0;i<rows;i++){
        ans=max(ans,dp[i][0]);
    }
    cout<<ans<<endl;
    return 0;   
}