#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
vector<vector<int>> levelOrder(TreeNode* root) {
	queue<TreeNode*> q;
	q.push(root);
	int next=1;
	while(!q.empty()){
		vector<int> ans(next);
		ans.push_back();
	}
}
int32_t main(){
	qubais_judge;
	IOS;
	return 0;   
}