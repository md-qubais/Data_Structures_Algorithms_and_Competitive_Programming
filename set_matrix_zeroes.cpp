#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void setZeroes(vector<vector<int>>& mat){
	int arr[mat[0].size()]={0};
	int rows=mat.size()-1;
	int cols=mat[0].size()-1;
	for(int i=0;i<=rows;i++){
		for(int j=0;j<=cols;j++){
			if(mat[i][j]==0){
				arr[j]++;
			}
		}
	}
}
int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	vector<vector<int>> mat;
	for(int i=0;i<rows;i++){
		vector<int> col(cols);
		for(int j=0;j<cols;j++){
			cin>>col[j];
		}
		mat.push_back(col);
	}
	setZeroes(mat);
	return 0;   
}