#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int maze[1000][1000]={0};
bool solve(char ch[][1000],int rows,int cols,int i,int j){
	if(i==rows and j==cols){
		maze[i][j]=1;
		for(int i=0;i<=rows;i++){
			for(int j=0;j<=cols;j++){
				cout<<maze[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	maze[i][j]=1;
	if(j<cols and ch[i][j+1]!='X'){
		bool onright=solve(ch,rows,cols,i,j+1);
		if(onright){
			return true;
		}
	}
	if(i<rows and ch[i+1][j]!='X'){
		bool ondown=solve(ch,rows,cols,i+1,j);
		if(ondown){
			return true;
		}
	}
	maze[i][j]=0;
	return false;
}





int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	char ch[rows][1000];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>ch[i][j];
		}
	}	
	if(solve(ch,rows-1,cols-1,0,0)==false){
		cout<<-1<<endl;
	}
	return 0;   
}