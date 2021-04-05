#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int get(int n,int m,vector<string>&a,string str){
	if(n<0){
		return 0;
	}
	if(n==0){
		a.push_back(str);
		return 1;
	}
	int ans=0;
	for(int i=m;i>=1;i--){
		ans+=get(n-i,m,a,str+(to_string(i)));
	}
	return ans;
}
void print_paths(int n,int m){
	int ans=0;
	vector<string> a;
	 ans=get(n,m,a,"");
	cout<<ans<<endl;
	reverse(a.begin(),a.end());
	cout<<"[";
	for(int i=0;i<a.size();i++){
		if(i==a.size()-1){
			cout<<a[i]<<"]";
			continue;
		}
		cout<<a[i]<<", ";
	}
	cout<<endl;
	for(auto it:a){
		cout<<it<<" "<<endl;
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