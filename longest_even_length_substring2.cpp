#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		string arr;
		cin>>arr;
		int ans=0;
		int n=arr.length();
		for(int i=0;i<n;i++){
			int l=0;
			int r=0;
			int prev=i;
			int after=i+1;
			while(prev>=0 and after<n){
				l+=arr[prev]-'0';
				r+=arr[after]-'0';
				if(l==r){
					ans=max(ans,(i-prev+1)*2);
				}
				prev--;
				after++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;   
}