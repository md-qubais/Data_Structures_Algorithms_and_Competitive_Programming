#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//3035
int get_min(vector<vector<int>>&mat,int i,int j,int asf){
	;
	if(i==mat.size()-1 and j==mat[0].size()-1){
		asf+=mat[i][j];
		return asf;
	}
	if(i>mat.size()-1 or j>mat[0].size()-1){
		return INT_MAX;
	}
	return min(get_min(mat,i+1,j,asf+mat[i][j]),get_min(mat,i,j+1,asf+mat[i][j]));
}


int min_cost(vector<vector<int>>&matrix){
	
	return get_min(matrix,0,0,0);
}
int32_t main(){
	qubais_judge;
	IOS;
	int rows;
	int cols;
	cin>>rows>>cols;
	vector<vector<int>> mat;
	for(int i=0;i<rows;i++){
		vector<int> r(cols);
		for(int j=0;j<cols;j++){
			cin>>r[j];
		}
		mat.push_back(r);
	}
	cout<<min_cost(mat);
	return 0;
}