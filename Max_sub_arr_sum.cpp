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
		cin>>num;
		int arr[num];
		for(int i=0;i<num;i++){
			cin>>arr[i];
		}
		int ans=0;
		int M=0;
		int so_far=0;
		for(int i=0;i<num;i++){
			if((so_far+arr[i])>so_far){
				so_far=so_far+arr[i];
				ans=max(ans,so_far);
			}else if(so_far+arr[i]<0){
				so_far=0;
				ans=max(ans,so_far);
			}else{
				so_far+=arr[i];
			}
		}
		cout<<ans<<endl;

	}
	return 0;   
}