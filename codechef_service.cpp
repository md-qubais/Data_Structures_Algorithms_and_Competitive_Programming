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
	while(t--){
		int n;
		cin>>n;
		vector<string> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		string str="";
		bool b=false;
		for(int i=0;i<n;i++){
			if(v[i]=="stop"){
				if((str=="" or str=="stop") and v[i]=="stop"){
					cout<<404<<endl;
					b=true;
					break;
				}
			}
			str=v[i];
		}
		if(b){
			continue;
		}
		cout<<200<<endl;
	}
	return 0;   
}