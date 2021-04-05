#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void printMazePaths(int i, int j, int n, int m, string ans){
    // write your code here
    if(i>n or j>m){
    	return;
    }
    if(i==n and j==m){
    	cout<<ans<<endl;
    	return;
    }
    printMazePaths(i,j+1,n,m,ans+'h');
    printMazePaths(i+1,j,n,m,ans+'v');

    
}
int32_t main(){
	qubais_judge;
	IOS;
	int n,m;
	cin>>n>>m;
	printMazePaths(1,1,n,m,"");
	return 0;   
}