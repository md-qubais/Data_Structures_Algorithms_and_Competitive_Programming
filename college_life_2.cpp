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
		int s;
		cin>>s;
		int tot=0;
		int queries[s];
		for(int i=0;i<s;i++){
			cin>>queries[i];
		}
		for(int i=0;i<s;i++){
			int ep;
			cin>>ep;
			for(int j=0;j<ep;j++){
				int num;
				cin>>num;
				if(j==0){
					tot+=num;
				}else{
					tot+=num-queries[i];
				}
			}
		}
		cout<<tot<<endl;
	}
	return 0;   
}