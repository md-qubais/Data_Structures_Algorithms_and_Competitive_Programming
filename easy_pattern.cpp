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
	int rows,cols;
	rows=n,cols=n;
	int num=n/2;
	int go=1;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=cols;j++){
			cout<<go++<<" ";
		}
		cout<<endl;
		go=go+n;
	}
	go=go-n;
	if(n%2!=0){
		int temp=go+n;
		for(int i=1;i<=cols;i++){
			cout<<temp++<<" ";
		}
		cout<<endl;
	}
	int temp=go;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=cols;j++){
			cout<<go++<<" ";
		}
		cout<<endl;
		go=temp-(2*n);
		temp=go;
	}
	return 0;
}