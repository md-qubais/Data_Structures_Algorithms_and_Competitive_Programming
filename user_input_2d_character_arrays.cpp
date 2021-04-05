#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


int32_t main(){
	qubais_judge;
	IOS;
	char ch[100][100];
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>ch[i];
	}
	for(int i=0;i<num;i++){
		cout<<ch[i]<<endl;
	}
	return 0;   
}