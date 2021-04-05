#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//here we are starting from the source
//and in that another code 
//we are actually starting from the destination
int solve(int rows,int cols,int i,int j){
	if(i==rows-1 and j==cols-1){
		return 1;
	}
	if(i>=rows){
		return 0;
	}
	if(j>=cols){
		return 0;
	}
	return solve(rows,cols,i+1,j)+solve(rows,cols,i,j+1);
}



int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int rows=n,cols=n;
	cout<<solve(rows,cols,0,0)<<endl;	
	return 0;   
}