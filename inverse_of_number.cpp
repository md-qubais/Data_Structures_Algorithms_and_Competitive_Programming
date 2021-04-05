#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int Pow(int a,int b){
	if(b==0){
		return 1;
	}
	int num1=Pow(a,b/2);
	int num2=num1;
	if(b%2!=0){
		return num1*num2*a;
	}
	return num1*num2;

}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int ans=0;
	int count=1;
	while(n>0){
		int num=n%10;
		n=n/10;
		int n1=count;
		int n2=Pow(10,num-1);
		ans+=n1*n2;
		//cout<<n1<<"*"<<n2<<"="<<ans<<endl;
		count++;
			
	}
	cout<<ans<<endl;
	return 0;   
}