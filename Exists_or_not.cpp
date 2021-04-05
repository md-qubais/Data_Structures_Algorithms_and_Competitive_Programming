#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		int arr[num];
		unordered_map<int,bool> m;
		for(int i=0;i<num;i++){
			cin>>arr[i];
			m[arr[i]]=true;
		}
		int q;
		cin>>q;
		while(q--){
			int n;
			cin>>n;
			if(m[n]){
				cout<<"Yes"<<endl;
			}else cout<<"No"<<endl;

		}

	}
	return 0;     
}