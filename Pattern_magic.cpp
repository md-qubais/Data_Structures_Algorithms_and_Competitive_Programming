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
	for(int i=1;i<=2*n-1;i++){
		cout<<"*";
	}
	cout<<endl;
	for(int i=1;i<n;i++){
		for(int j=i;j<n;j++){
			cout<<"*";
		}
		for(int s=1;s<=2*i-1;s++){
			cout<<" ";
		}
		for(int j=i;j<n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=2;i<n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int s=i;s<n-1;s++){
			cout<<" ";
		}
		for(int s=i;s<n;s++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}




		cout<<endl;
	}



	for(int i=1;i<=2*n-1;i++){
		cout<<"*";
	}
	return 0;   
}