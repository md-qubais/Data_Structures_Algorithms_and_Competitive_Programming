#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int get(int x,int n){
	if(n==0){
		return 1;
	}
	if(n==1){
		return x;
	}
	return x*get(x,n-1);

}
int32_t main(){
	qubais_judge;
	IOS;	
	int x,n;
	cin>>x>>n;
	cout<<get(x,n)<<endl;
	return 0;   
}