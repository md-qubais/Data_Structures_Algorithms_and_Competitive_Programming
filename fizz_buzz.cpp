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
		bool b=false;
		if(i%3==0 ){
			b=true;
			cout<<"fizz"<<endl;
		}
	else	if(i%5==0 and b==false){
			b=true;
			cout<<"buzz"<<endl;
		}
		else if(i%15==0 and b==false){
			cout<<"fizzbuzz"<<endl;
		}
		else{
			cout<<i<<endl;
		}

	}
	return 0;   
}
