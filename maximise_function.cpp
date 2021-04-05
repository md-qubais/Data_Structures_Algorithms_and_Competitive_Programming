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
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int x=0,y=n-1,z=n-2;
		int ans1=abs(arr[x]-arr[y])+abs(arr[y]-arr[z])+abs(arr[z]-arr[x]);
		y=1,z=n-1;
		int ans2=abs(arr[x]-arr[y])+abs(arr[y]-arr[z])+abs(arr[z]-arr[x]);
		cout<<max(ans1,ans2)<<endl;
		}
	
	return 0;
}