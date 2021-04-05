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
	for(int i=0;i<n;i++){
		cout<<"*\t";
	}
	cout<<endl;
	int count=1;
	for(int i=1;i<=n/2;i++){
		for(int j=i;j<=n/2;j++){
			cout<<"*\t";
		}
		for(int j=1;j<=count;j++){
			cout<<"\t";
		}
		count=count+2;
		for(int j=i;j<=n/2;j++){
			cout<<"*\t";
		}
		cout<<endl;
	}
	count=count-3;
	for(int i=2;i<=n/2;i++){
		for(int j=1;j<=i;j++){
			cout<<"*\t";
		}
		for(int s=1;s<=count-1;s++){
			cout<<"\t";
		}
		count=count-2;
		for(int j=1;j<=i;j++){
			cout<<"*\t";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		cout<<"*\t";
	}
    return 0;   
}