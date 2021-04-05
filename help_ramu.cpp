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
		int c1,c2,c3,c4;
		cin>>c1>>c2>>c3>>c4;
		int r,c;
		cin>>r>>c;
		int rickshaw[r],cab[c];
		for(int i=0;i<r;i++){
			cin>>rickshaw[i];
		}
		for(int i=0;i<c;i++){
			cin>>cab[i];
		}
		//to do code here
		int rickshaw_total=0;
		for(int i=0;i<r;i++){
			rickshaw_total+=min(rickshaw[i]*c1,c2);
		}
		rickshaw_total=min(rickshaw_total,c3);
		int cab_total=0;
		for(int i=0;i<c;i++){
			cab_total+=min(cab[i]*c1,c2);
		}
		cab_total=min(cab_total,c3);
		cout<<min(rickshaw_total+cab_total,c4)<<endl;
	}
	return 0;   
}