#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool prime(int n){
	int i;
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int32_t main(){
	qubais_judge;
	IOS;
	int dp[1000001]={0};
	int i,count=0;
	for(i=2;i<=1000000;i++){
		if(prime(i)){
			count++;
		}
		dp[i]=count;
	}
	int t;
	scanf("%ld",&t);
	while(t--){
		int x,y;
		scanf("%ld%ld",&x,&y);
		dp[x]<=y?printf("Chef\n"):printf("Divyam\n");
	}
	return 0;   
}