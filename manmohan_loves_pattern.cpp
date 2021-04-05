#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


int32_t main(){
	qubais_judge;
	IOS;
	int num;
	cin>>num;
	for(int i=1;i<=num;i++){
		if(i%2==0){
			cout<<"1";
			for(int j=2;j<=i-1;j++){
				cout<<"0"<<"";
			}
			cout<<"1";

		}else{
          for(int j=1;j<=i;j++){
          	cout<<"1"<<"";
          }

		}
		cout<<endl;

	}	
	return 0;   
}