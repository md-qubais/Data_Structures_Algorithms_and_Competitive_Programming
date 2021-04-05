#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
#include <iostream>
using namespace std;

int cs(int arr[], int n){
	int dp[n+1]={0};
	dp[0]=1;
	for(int i=0;i<n;i++){
		for(int j=1;j<=arr[i];j++){
			if(i+j<=n){
			dp[i+j]+=dp[i];
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
    cout<<cs(arr,n)<<endl;
    return 0;
}