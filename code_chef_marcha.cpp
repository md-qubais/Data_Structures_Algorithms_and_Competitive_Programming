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
		int num;
		int k;
		cin>>num>>k;
		bool b=false;
		int arr[num];
		for(int i=0;i<num;i++){
			cin>>arr[i];
		}
		int n=(1<<num)-1;
		for(int i=1;i<=n;i++){
			int mask=i;
			int j=0;
			int ans=0;
			while(mask){
				if(mask&1){
					ans+=arr[j];
				}
				j++;
				mask=mask>>1;
			}
			if(ans==k){

				b=true;
			}
		}
		if(b==false){
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;
		}
	}
	return 0;   
}