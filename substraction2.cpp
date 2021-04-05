#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	int b;
	int n1;
	int n2;
	cin>>b>>n1>>n2;
	int borrow=0;
	int ans=0;
	int i=1;
	while(n1>0 or n2>0 or borrow!=0){
		int t1=n1%10;
		int t2=n2%10;
		t2=t2-borrow;
		if(t2<t1){
			ans+=((t2+b)-t1)*i;
			borrow=1;
		}else{
			ans+=(t2-t1)*i;
			borrow=0;
		}
		n1=n1/10;
		n2=n2/10;
		i=i*10;
	}
	cout<<ans<<endl;
	return 0;   
}