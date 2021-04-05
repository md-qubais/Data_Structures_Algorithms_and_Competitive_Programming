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
	//the upper part
	for(int i=n;i>=1;i--){
		for(int j=n;j>=i;j--){
			cout<<j<<" ";
		}
		
		for(int k=1;k<=2*i-1;k++){
				cout<<"  ";
			}
		
			for(int j=i;j<=n;j++){
				cout<<j<<" ";
			}
		cout<<endl;
	}
	for(int i=n;i>=1;i--){
		cout<<i<<" ";
	}
	cout<<0<<" ";
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
	}
    cout<<endl;
	//the lower part
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			cout<<j<<" ";
		}
		for(int s=1;s<=2*i-1;s++){
			cout<<"  ";
		}
		for(int j=i;j<=n;j++){
			cout<<j<<" ";
		}


		cout<<endl;

	}




	return 0;   
}