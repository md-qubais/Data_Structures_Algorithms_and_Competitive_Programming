#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int minJumps(int *arr,int n){
    n=n-1;
    int dp[n+1]={0};
     dp[0]=0;
     dp[n]=-1;
     if(arr[0]==0){
        return dp[n];
     }
    for(int i=0;i<n;i++){
        for(int j=1;j<=arr[i];j++){
                if(i+j<=n and (arr[i+j]!=0 or i+j==n)){
                if(i+j==n){
                    if(dp[i+j]==-1) dp[i+j]=INT_MAX;
                    dp[i+j]=min(dp[i+j],dp[i]+1);
                    continue;
                }
                if(dp[i+j]==0){
                    dp[i+j]+=dp[i]+1;
                }else{
                    dp[i+j]=min(dp[i+j],dp[i]+1);
                }
            }
        }
    }
    return dp[n];
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<minJumps(arr,n)<<endl;
    return 0;
}