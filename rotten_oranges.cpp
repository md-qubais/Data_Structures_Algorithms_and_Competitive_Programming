#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int orangesRotting(vector<vector<int>>& grid) {
return get_ans(grid,0,0,grid.size(),grid[0].size());
}
int32_t main(){
	qubais_judge;
	IOS;
	return 0;   
}
