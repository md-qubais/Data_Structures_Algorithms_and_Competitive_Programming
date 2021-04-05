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
		int tot=1;
		int prev_speed=arr[0];
		for(int i=1;i<num;i++){
			if(prev_speed>=arr[i]){
				tot++;
				prev_speed=arr[i];
			}
		}
		cout<<tot<<endl;
	}
	return 0;   
}