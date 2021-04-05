#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
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
			ans.push_back(matrix[i][j]);
			i--;
			j++;
		}
		if(i<0 and j>cols){
			i=i+2;
			j--;
		}else if(i<0 and j<=cols){
			i++;
		}else{
			i+=2;
			j--;
		}
		if(count==n*m){
			break;
		}
		while(i<=rows and j>=0){
			ans.push_back(matrix[i][j]);
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
	return ans;
    }
int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	vector<vector<int>> ans;
	for(int i=0;i<rows;i++){
		vector<int> hameeds(cols);
		for(int j=0;j<cols;j++){
			cin>>hameeds[j];
		}
		ans.push_back(hameeds);
	}
	vector<int> a=findDiagonalOrder(ans);
	for(auto it:a){
		cout<<it<<endl;
	}
	return 0;
}
