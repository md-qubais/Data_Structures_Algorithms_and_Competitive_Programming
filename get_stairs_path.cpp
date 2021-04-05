#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
vector<string> get_stair_path(int n){
	if(n==0){
		vector<string> res;
		res.push_back("");
		return res;
	}
	if(n<0){
		vector<string> res;
		return res;
	}
	vector<string> n1=get_stair_path(n-1);
	vector<string> n2=get_stair_path(n-2);
	vector<string> n3=get_stair_path(n-3);
	vector<string> ans;
	for(auto it:n1){
		ans.push_back(('1')+it);
	}
	for(auto it:n2){
		ans.push_back(('2')+it);
	}
	for(auto it:n3){
		ans.push_back(('3')+it);
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<string> ans=get_stair_path(n);
	cout<<"[";
	for(int it=0;it<ans.size()-1;it++){
		cout<<ans[it]<<", ";
	}
	cout<<ans[ans.size()-1];
	cout<<"]"<<endl;
	return 0;   
}