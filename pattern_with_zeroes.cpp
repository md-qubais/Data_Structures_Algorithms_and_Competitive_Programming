#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

void pattern_with_zeroes(int n){
	for(int i=1;i<=n;i++){
		
	for(int j=1;j<=i;j++){
		if(j==1){
			cout<<i<<"\t";
		}else if(j==i){
			cout<<i<<"\t";
		}else{
			cout<<0<<"\t";
		}
	}
	cout<<endl;
}
}



int32_t main(){
	qubais_judge;
	IOS;	
	int n;
	cin>>n;
	pattern_with_zeroes(n);
	return 0;   
}