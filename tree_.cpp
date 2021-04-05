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
	for(int i=1;i<n;i++){
		cout<<" ";
	}
	cout<<"*"<<endl;
	for(int i=2;i<=n;i++){
		for(int s=n;s>i;s--){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	return 0;   
}