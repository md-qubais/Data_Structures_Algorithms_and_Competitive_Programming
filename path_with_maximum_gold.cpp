#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int getMaximumGold(vector<vector<int>>& grid){
	
	
}

int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	vector<vector<int>> ans;
	for(int i=0;i<rows;i++){
		vector<int> res(cols);
		for(int j=0;j<cols;j++){
			cin>>res[j];
		}
		ans.push_back(res);
	}
	cout<<getMaximumGold(ans)<<endl;

	return 0;   
}