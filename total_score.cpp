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
		int arr[k];
		for(int i=0;i<k;i++){
			cin>>arr[i];
		}
		vector<string> str(n);
		for(int i=0;i<n;i++){
			cin>>str[i];
		
		}
		for(auto it:str){
			int ans=0;
			for(int i=0;i<it.length();i++){
				if(it[i]=='1'){
					ans+=arr[i];
				}
			}
		cout<<ans<<endl;
		}
	}
	return 0;   
}