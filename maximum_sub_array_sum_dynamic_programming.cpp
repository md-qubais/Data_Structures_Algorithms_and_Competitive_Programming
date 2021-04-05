#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//using dynamic programming
int maxsum(int *a,int n){
    int	dp[100]={0};
	dp[0]=a[0]>0?a[0]:0;
	int max_so=dp[0];
	for(int i=1;i<n;i++){
     dp[i]=dp[i-1]+a[i];
     if(dp[i]<0){
     	dp[i]=0;
     }
     max_so=max(max_so,dp[i]);
	}

	return max_so;

}


//this is max sum with space optimization
int max_sum(int *arr,int n){
	int ans=0;
    int max_so=0;
    for(int i=0;i<n;i++){
         
          if(arr[i]+max_so<0){
                max_so=0;
                continue;
          }
          max_so+=arr[i];
          ans=max(max_so,ans);
    }
return ans;
}

int32_t main(){
	qubais_judge;
	IOS;
	int arr[]={-3,2,5,-1,6,3,-2,7,-5,2};
	int n=sizeof(arr)/sizeof(int);
	cout<<maxsum(arr,n);
	return 0;    
}