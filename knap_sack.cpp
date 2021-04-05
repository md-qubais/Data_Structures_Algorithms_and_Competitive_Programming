#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int dp[100][100]={0};
int ans(int *v,int *w,int n,int maximum,int i){
	if(maximum<0){
		return INT_MIN;
	}
	if(i==n){
		if(maximum<0){
			return INT_MIN;
		}else{
			return 0;
		}
	}
	if(dp[i][maximum]!=0){
		return dp[i][maximum];
	}
	int a1=ans(v,w,n,maximum,i+1);
	int a2=ans(v,w,n,maximum-w[i],i+1)+v[i];
	dp[i][maximum]=max(a1,a2);
	return dp[i][maximum];
}

int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int v[n];
	int w[n];
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	int maximum;
	cin>>maximum;
	cout<<ans(v,w,n,maximum,0)<<endl;
	return 0;   
}