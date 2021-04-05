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
	for(int i=n;i>=1;i--){
		for(int s=2*i-2;s>=1;s--){
			cout<<" ";
		}
		for(int j=i;j<=n;j++){
			cout<<"* ";
		}
		cout<<endl;

	}
	return 0;   
}