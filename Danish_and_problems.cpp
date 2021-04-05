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
		int arr[10];
		for(int i=0;i<10;i++){
			cin>>arr[i];
		}
		int k;
		cin>>k;
		int i=9;
		while(k>=arr[i] and i>=0){
			k=k-arr[i];
			i--;
		}
		cout<<(i+1)<<endl;
	}
	
	return 0;   
}