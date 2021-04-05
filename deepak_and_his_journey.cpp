#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
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
		int Min=INT_MAX;
		vector<int> cost(num),petrol(num);
		for(int i=0;i<num;i++){
            cin>>cost[i];
		}
		for(int i=0;i<num;i++){
			cin>>petrol[i];
		}
		int ans=0;
		Min=cost[0];
		ans+=Min*petrol[0];
		for(int i=1;i<num;i++){
            Min=min(Min,cost[i]);
            ans+=Min*petrol[i];
		}
		cout<<ans<<endl;
	}
	return 0;     
}