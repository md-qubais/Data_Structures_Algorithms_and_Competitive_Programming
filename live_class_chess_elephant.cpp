#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//it can move any towards left
//it can move any move towards right
//it can move any move towards left
//it can move any move towards down
int solve(int i,int j){
	if(i==0 and j==0){
		return 1;
	}
	int ans=0;
	for(int k=0;k<i;k++){
		ans+=solve(k,j);
	}
	for(int k=0;k<j;k++){
		ans+=solve(i,k);
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	cout<<solve(rows,cols)<<endl;
	return 0;   
}