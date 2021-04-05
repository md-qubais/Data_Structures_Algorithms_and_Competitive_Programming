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
		int odd=0;
		int even=0;
		for(int i=0;i<n;i++){
			if(arr[i]%2!=0){
				odd++;
			}else{
				even++;
			}
		}
		if(odd==even){
			cout<<odd<<endl;
		}else if(odd>even){
			cout<<even<<endl;
		}else{
			cout<<odd<<endl;
		}
	}
	return 0;
}