
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
	int n1;
	int n2;
	cin>>n>>n1>>n2;
	int borrow=0;
	int ans=0;
	int i=1;
	while(n2>0){
		int t1=n1%10;
		int t2=n2%10;
		int num=t2-borrow-t1;
		if(num>=0){
			borrow=0;
		}else{
			ans+=((t2+n-borrow)-t1)*i;
			borrow=1;
		}
		i=i*10;
		n1=n1/10;
		n2=n2/10;
	}
	cout<<ans<<endl;
	return 0;   
}