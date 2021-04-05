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
		int num=0;
		for(int j=1;j<=i;j++){
			cout<<i<<" ";
			num++;
		}
		for(int j=num+1;j<=n;j++){
			cout<<j<<" ";
		}


		cout<<endl;
	}
	return 0;   
}