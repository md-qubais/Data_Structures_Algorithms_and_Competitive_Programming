#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
vector<vector<int>> diagonalSort(vector<vector<int>>& mat){
	vector<vector<int>> ans;
	int rows=mat.size()-1;
	int cols=mat[0].size()-1;
	int n=rows;
	while(n>=0){
		vector<int> temp;
		int i=n;
		int j=0;
		while(i<=rows and j<=cols){

			temp.push_back(mat[i++][j++]);
		}
		sort(temp.begin(),temp.end());
		i=n;
		j=0;
		int k=0;
		while(k<temp.size()){
			mat[i++][j++]=temp[k++];
		}
		n--;
	}
	n=1;
	while(n<=cols){
		int i=0;
		int j=n;
		vector<int> temp;
		while(i<=rows and j<=cols){
			temp.push_back(mat[i++][j++]);
		}
		sort(temp.begin(),temp.end());
		i=0;
		j=n;
		int k=0;
		while(k<temp.size()){
			mat[i++][j++]=temp[k++];
		}
		n++;
	}
	return mat;        
}
int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	vector<vector<int>> mat;
	for(int i=0;i<rows;i++){
		vector<int> temp(cols);
		for(int j=0;j<cols;j++){
			cin>>temp[j];
		}
		mat.push_back(temp);
	}
	vector<vector<int>> ans=diagonalSort(mat);
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}