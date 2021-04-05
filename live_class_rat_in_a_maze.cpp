#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool solve(char ch[][100],int i,int j,int rows,int cols){
	//if we got the cheeze or we just solved the maze
	if(i==rows and j==cols){
		ch[i][j]='1';
		for(int i1=0;i1<=rows;i1++){
			for(int j1=0;j1<=cols;j1++){
				cout<<ch[i1][j1]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		//if we are returing the 
		//false value then we are
		//getting the entire answer
		//for the rat in a maze problem
		return false;
	}
	ch[i][j]='1';
	//if we can get the answer from the right
	if(j<cols and ch[i][j+1]!='x'){
		bool can_solve_right=solve(ch,i,j+1,rows,cols);
		if(can_solve_right){
			return true;
		}
	}


	//if we can get the answer from the left
	if(i<rows and ch[i+1][j]!='x'){
		bool can_solve_down=solve(ch,i+1,j,rows,cols);
		if(can_solve_down){
			return true;
		}
	}



	ch[i][j]='0';
	//if we dont get the answer from the either of one
	return false;

}



int32_t main(){
	qubais_judge;
	IOS;
	char ch[100][100];
	int rows,cols;
	cin>>rows>>cols;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>ch[i][j];
		}
	}
	cout<<"before finding the cheeze"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<ch[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"after finding the cheeze"<<endl;
	solve(ch,0,0,rows-1,cols-1);
	return 0;   
}