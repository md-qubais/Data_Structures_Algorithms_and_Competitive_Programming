#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int fast(int n,int x){
	if(x==0){
		return 1;
	}
	int get_fast=fast(n,x/2);
	if(x&1){//where x is odd
		return get_fast*get_fast*n;
	}
	//or else n is even
	return get_fast*get_fast;

}
int32_t main(){
	qubais_judge;
	IOS;	
	int n,x;
	cin>>n>>x;
	cout<<fast(n,x);
	return 0;   
}