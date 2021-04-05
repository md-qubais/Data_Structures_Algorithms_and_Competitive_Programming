#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int paths(int n,int k){
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	int ans=0;
	for(int i=1;i<=k;i++){
		ans+=paths(n-i,k);
	}
	return ans;
}




int32_t main(){
	qubais_judge;
	IOS;
	int n,k;
	cin>>n>>k;
	cout<<paths(n,k)<<endl;
	return 0;   
}