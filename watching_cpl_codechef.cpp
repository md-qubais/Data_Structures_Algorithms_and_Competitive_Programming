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
		int arr[n];
		int sum=0;
		int num=0;
		int i;
		for(i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		if(sum==2*k){
			cout<<n<<endl;
			continue;
		}
		if(sum<2*k){
			cout<<-1<<endl;
			continue;
		}
		sort(arr,arr+n,greater<int>{});
		int sa=0;
		int sb=0;
		cout<<num<<endl;
	}
	return 0;   
}