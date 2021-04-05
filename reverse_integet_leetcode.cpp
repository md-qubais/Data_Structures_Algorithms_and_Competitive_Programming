#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int reverse(int x) {
	long ans=0;
	int i=1;
	while(x>0 or x<0){
		ans=ans*10+x%10;
		x=x/10;
	}
	if(ans>=INT_MAX or ans<=INT_MIN){
		return -1;
	}
	return (int)ans;
}
int32_t main(){
	qubais_judge;
	int n;
	cin>>n;
	cout<<reverse(n)<<endl;
	return 0;   
}