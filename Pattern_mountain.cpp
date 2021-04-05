#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void pattern_mountain(int n){
	for(int i=1;i<n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<"\t";
		}
		for(int s=i+1;s<n;s++){
			cout<<"\t";
		}
		for(int s=n;s>=i+1;s--){
			cout<<"\t";
		}
		for(int j=i;j>=1;j--){
			cout<<j<<"\t";
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		cout<<i<<"\t";
	}
	for(int i=n-1;i>=1;i--){
		cout<<i<<"\t";
	}
	cout<<endl;

}
int32_t main(){
	qubais_judge;
	IOS;	
	int n;
	cin>>n;
	pattern_mountain(n);
	return 0;   
}