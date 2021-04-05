#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//h right
//v down
//d diagonal
vector<string> getmaze(int i,int j,int n,int m,string ans){
	if(i==n and m==j){
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
	vector<string> h=getmaze(i,j+1,n,m,ans+"h");
	vector<string> v=getmaze(i+1,j,n,m,ans+"v");
	vector<string> d=getmaze(i+1,j+1,n,m,ans+"d");
	for(auto it:h){
		int h;
		int v;
		for(int i=0;it.length();i++){
			if(it[0]=='h'){
				h++;
			}else{
				v++;
			}
		}
		string str="";
		string str1=("h"+(h+'0'));//+("v"+(h+'0'));
		result.push_back(str1);
	}
	for(auto it:v){
		result.push_back(it);
	}
	for(auto it:d){
		result.push_back(it);
	}
	return result;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int m;
	cin>>m;
	vector<string> res=getmaze(1,1,n,m,"");
	cout<<"[";
	for(int i=0;i<res.size()-1;i++){
		cout<<res[i]<<", ";
	}
	cout<<res[res.size()-1]<<"]"<<endl;
	return 0;   
}