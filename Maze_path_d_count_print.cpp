



#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void solve(int rows,int cols,int i,int j,string ans,int &k){
	if(i==rows and j==cols){
		cout<<ans<<" ";
		k++;
		return;
	}
	//vertical
	if(i<rows ){
		solve(rows,cols,i+1,j,ans+'V',k);
	}
	//horizontal
	if(j<cols){
		solve(rows,cols,i,j+1,ans+'H',k);
	}
	//diagonal
	if(i<rows and j<cols){
		solve(rows,cols,i+1,j+1,ans+'D',k);
	}
	return;
}



int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	int k=0;
	string ans="";
	solve(rows-1,cols-1,0,0,ans,k);
	cout<<endl;
	cout<<k<<endl;
	return 0;   
}