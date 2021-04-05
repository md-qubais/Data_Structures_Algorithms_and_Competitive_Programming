#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int s=n;s>=n-i;s--){
        cout<<" ";
		}
		if(i==1){
           for(int j=1;j<=n;j++){
           	cout<<"*";
           }
		}else if(i==n){
			for(int j=1;j<=n;j++){
				cout<<"*";
			}
		}else{
			cout<<"*";
		}
      cout<<endl;
	}
	return 0;   
}