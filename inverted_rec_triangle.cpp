#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

void print(int n,int i,int j){
	if(i==0){
		return;
	}
	if(j>i){
		cout<<endl;
		print(n,i-1,1);
		return;
	}
	cout<<"*\t";
	print(n,i,j+1);
}

int32_t main(){
	qubais_judge;
	IOS;	
	int n;
	cin>>n;
	print(n,n,1);
	return 0;   
}