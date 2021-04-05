#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int s[1000][1000]={0};
bool solve(char ch[][1000],int rows,int cols,int i,int j){
	if(i==rows and j==cols){
		s[i][j]=1;
		for(int i1=0;i1<=rows;i1++){
			for(int j1=0;j1<=cols;j1++){
				cout<<s[i1][j1]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	s[i][j]=1;
	//right
	if(j<cols and ch[i][j+1]!='X' and s[i][j+1]!=1){
		bool right=solve(ch,rows,cols,i,j+1);
		if(right){
			return true;
		}
	}
	//left
	if(j>0 and ch[i][j-1]!='X' and s[i][j-1]!=1){
		bool left=solve(ch,rows,cols,i,j-1);
		if(left){
			return true;
		}
	}
	//up
	if(i>0 and ch[i-1][j]!='X' and s[i-1][j]!=1){
		bool up=solve(ch,rows,cols,i-1,j);
		if(up){
			return true;
		}
	}
	//down	
	if(i<rows and ch[i+1][j]!='X' and s[i+1][j]!=1){
		bool down=solve(ch,rows,cols,i+1,j);
		if(down){
			return true;
		}
	}	
	s[i][j]=0;
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
		cout<<"NO PATH FOUND"<<endl;
	}
	return 0;   
}