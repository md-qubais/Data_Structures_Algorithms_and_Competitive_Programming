#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

void printStairPaths(int n, string ans){
	if(n<0){
		return;
	}
	if(n==0){
		cout<<ans<<endl;
		return;
	}
	printStairPaths(n-1,ans+'1');
	printStairPaths(n-2,ans+'2');
	printStairPaths(n-3,ans+'3');
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	printStairPaths(n,"");
	return 0;   
}