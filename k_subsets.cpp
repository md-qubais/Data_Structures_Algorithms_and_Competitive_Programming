#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int k_subsets(int n,int k){
	if(n==k){
		return 1;
	}
	if(n<0){
		return 0;
	}
	if(k<0){
		return 0;
	}
	return k*k_subsets(n-1,k)+k_subsets(n-1,k-1);
}
int32_t main(){
	qubais_judge;
	IOS;
	int n,k;
	cin>>n>>k;
	cout<<k_subsets(n,k)<<endl;
	return 0;   
}