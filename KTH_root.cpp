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
		int n,k;
		cin>>n>>k;
		int s=0,e=n;
        int mid;
        int greatest=INT_MIN;
		while(s<=e){
			mid=(s+e)/2;
			if(pow(mid,k)<=n){
				greatest=max(greatest,mid);
                s=mid+1;
                mid=(s+e)/2;
			}else{
				e=mid-1;
				mid=(s+e)/2;
			}

		}
		cout<<greatest<<endl;
	}
	return 0;   
}