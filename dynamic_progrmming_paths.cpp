#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


int dp[1000000]={0};
int cs(int *arr,int n,int k,int asf){
	if(k==n){
		dp[k]=asf;
		return dp[k];
	}
	if(k>n){
		return INT_MAX;
	}
	if(dp[k]!=0 and dp[k]<=asf){
		return dp[k];
	}
	dp[k]=INT_MAX;
	for(int i=1;i<=arr[k];i++){
		dp[k]=min(dp[k],cs(arr,n,k+i,asf+1));
	}
	return dp[k];
}

/*
int jumps(int *arr,int n,int k,int ans){
    if(k==n){
    	if(dp[k]==0) dp[k]=ans;
    	else dp[k]=min(dp[k],ans);
        return dp[k];
    }
    if(k>n){
        return INT_MAX;
    }
    if(dp[k]!=0 and dp[k]<ans){
    	return dp[k];
    }
    dp[k]=INT_MAX;
    for(int i=1;i<=arr[k];i++){
        dp[k]=min(dp[k],jumps(arr,n,i+k,ans+1));
    }
    return dp[k];
}
int minJumps(int arr[], int n){
    // Your code here
    return jumps(arr,n-1,0,0);
}

/*
int cs(int *arr,int n){
	int dp[n+1]={0};
	dp[0]=0;
	dp[n]=INT_MAX;
	for(int i=0;i<n;i++){
		for(int j=1;j<=arr[i];j++){
			if(i+j<=n){
				if(i+j==n){
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
*/
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
    //cout<<cs(arr,n,0,0)<<endl;
    return 0;
}