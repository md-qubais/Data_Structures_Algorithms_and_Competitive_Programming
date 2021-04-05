#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string my;
		getline(cin,my);
		string ans="";
		int n;
		cin>>n;
		cin.ignore();
		cout<<my<<endl;
		while(n--){
			string frnd;
			getline(cin,frnd);
			cout<<frnd<<endl;
		}
		cout<<ans<<endl;
	}
	return 0;
}