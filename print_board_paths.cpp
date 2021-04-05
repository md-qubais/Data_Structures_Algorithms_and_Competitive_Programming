#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int get(int n,int m,vector<string>&ans,string str){
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}
	int ans=0;
	for(int i=m;i>=1;i--){
		ans+=get(n-i,m,ans,str+(to_string(i)));
	}
	return ans;
}
void print_paths(int n,int m){
	int ans=0;
	vector<string> ans;
	 ans=get(n,m,ans,"");
	cout<<ans<<endl;
	for(auto it:ans){
		cout<<it<<" "
	}
	cout<<endl;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	int m;
	cin>>n>>m;
	print_paths(n,m);
	return 0;
}