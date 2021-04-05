#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//h right
//v down
vector<string> maze_paths(int i,int j,int n,int m,string ans){
  	if(i==n and j==m){
  		vector<string> res;
  		res.push_back(ans);
  		return res;
  	}
  	if(i>n){
  		vector<string> res;
  		return res;
  	}
  	if(j>m){
  		vector<string> res;
  		return res;
  	}
  	vector<string> result;
  	vector<string> h=maze_paths(i,j+1,n,m,ans+"h");
  	vector<string> v=maze_paths(i+1,j,n,m,ans+"v");
  	for(auto it:h){
  		result.push_back(it);
  	}
  	//cout<<endl;
  	for(auto it:v){
  		result.push_back(it);
  	}
  //	cout<<endl;
  	return result;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int m;
	cin>>m;
	vector<string> res=maze_paths(1,1,n,m,"");
	cout<<"[";
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<", ";
	}
	cout<<res[res.size()-1];
	cout<<"]";
	return 0;   
}