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
		if(i==1){
			cout<<1;
		}else{
			cout<<i-1;
			for(int j=2;j<i;j++){
				cout<<0;

			}
			cout<<i-1;
		}
		cout<<endl;
	}
	return 0;   
}