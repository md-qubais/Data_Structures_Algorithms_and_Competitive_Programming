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
	int s=0;
	int e=n;
	int ans=0;
	while(s<=e){
		int mid=(s+e)/2;
		if((mid*mid)<=n){
			ans=mid;
			s=mid+1;
		}else{
			e=mid-1;
		}
	}
	cout<<ans<<endl;
	return 0;   
}