#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int path(int n){
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	return path(n-1)+path(n-2)+path(n-3);

}
int stairs(int n,int k){
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	int ans=0;
	for(int i=1;i<=k;i++){
		ans+=stairs(n-i,k);
	}
	return ans;
}

int32_t main(){
	qubais_judge;
	IOS;	
	int n,k;
	cin>>n>>k;
	cout<<path(n)<<endl;
	cout<<stairs(n,k)<<endl;
	return 0;   
}