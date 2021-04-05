#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void set_row_col(vector<vector<int>>& matrix,int i,int j){
	int si=i;
	int sj=j;
	while(si>=0){
		if(matrix[si][j]!=0){
			matrix[si][j]=-1;
		}
		si--;
	}
	si=i;
	while(si<matrix.size()){
		if(matrix[si][j]!=0){
			matrix[si][j]=-1;	
		}
		si++;
	}
	while(sj<matrix[0].size()){
		if(matrix[i][sj]!=0){
			matrix[i][sj]=-1;	
		}
		sj++;
	}
	sj=j;
	while(sj>=0){
		if(matrix[i][sj]!=0){
			matrix[i][sj]=-1;		
		}
		sj--;
	}
}


void setZeroes(vector<vector<int>>& matrix){
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[0].size();j++){
			if(matrix[i][j]==-1){
				continue;
			}
			if(matrix[i][j]==0){
				set_row_col(matrix,i,j);
			}
		}
	}
}
int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	vector<vector<int>> matrix;
	for(int i=0;i<rows;i++){
		vector<int> temp(cols);
		for(int j=0;j<cols;j++){
			cin>>temp[j];
		}
		matrix.push_back(temp);
	}
	setZeroes(matrix);
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[0].size();j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;   
}