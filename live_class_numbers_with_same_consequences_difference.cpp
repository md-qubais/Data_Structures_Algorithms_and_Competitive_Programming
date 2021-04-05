#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void difference(int n,int k,int ans){
	if(n==0){
		cout<<ans<<endl;
		return;
	}
	if(ans!=0){
		//to avoid duplicates
		if((ans%10-k)>=0 and k!=0){
			difference(n-1,k,ans*10+(ans%10-k));
		}
		if((ans%10+k)<=9){
			difference(n-1,k,ans*10+(ans%10)+k);
		}
		return;
	}
	for(int i=1;i<=9;i++){
	//	cout<<"qubais->"<<ans*10+i<<endl;
		difference(n-1,k,ans*10+i);
	}
	return;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	int k;
	cin>>n>>k;
	difference(n,k,0);
	return 0;   
}