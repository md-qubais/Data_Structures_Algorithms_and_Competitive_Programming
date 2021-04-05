#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool solve(int arr[][1000],int rows,int cols,int i,int j){
	if(){
		
	}

}
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int rows=n,cols=n;
		int arr[rows][1000];
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				arr[i][j]=0;
			}
		}
		solve(arr,rows-1,cols-1,0,0);
	}	
	return 0;   
}