#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
vector<int> findDiagonalOrder(vector<vector<int>>& matrix){
	vector<int> ans;
	int count=0;
	int n=matrix.size();
	int m=matrix[0].size();
	int rows=n-1;
	int cols=m-1;
	int i=0;
	int j=0;
	while(count!=n*m){
		while(i>=0 and j<=cols){
			count++;
			cout<<i<<" "<<j<<endl;
			ans.push_back(matrix[i][j]);
			i--;
			j++;
		}
		if(i<0 and j>cols){
			i=i+2;
			j--;
		}else{
			i++;
		}
		if(count==n*m){
			break;
		}
		while(i<=rows and j>=0){
			ans.push_back(matrix[i][j]);
			cout<<i<<" "<<j<<endl;
			i++;
			j--;
			count++;
		}
		if(i>rows and j<0){
			i--;
			j=j+2;
		}
		else if(j<0 and i<=rows){
			j++;
		}else{
			i--;
			j+=2;
		}
		if(count==n*m){
			break;
		}
	}
	//cout<<i<<" "<<j<<endl;
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	vector<vector<int>> matrix;
	for(int i=0;i<rows;i++){
		vector<int> res(cols);
		for(int j=0;j<cols;j++){
			cin>>res[j];
		}
		matrix.push_back(res);
	}
	vector<int> ans=findDiagonalOrder(matrix);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;


	return 0;   
}