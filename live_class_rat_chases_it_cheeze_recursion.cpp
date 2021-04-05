#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//in this case we are starting from the destination
int ratWays(int n,int m){
	if(n==0 and m==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	if(m<0){
		return 0;
	}
	return ratWays(n-1,m)+ratWays(n,m-1);
}
int32_t main(){
	qubais_judge;
	IOS;	
	int n,m;
	cin>>n>>m;
	cout<<ratWays(n,m)<<endl;
	return 0;   
}