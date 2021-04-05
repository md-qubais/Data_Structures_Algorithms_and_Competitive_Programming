#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int multiply(int n,int k){
	if(k==1){//if(k==0) return 0;
		return n;
	}
	return n+multiply(n,k-1);

}


int32_t main(){
	qubais_judge;
	IOS;	
	int n,k;
	cin>>n>>k;
	cout<<multiply(n,k)<<endl;
	return 0;   
}