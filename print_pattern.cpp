#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int arr[n];
	int Max=INT_MIN;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		Max=max(Max,arr[i]);
	}
	while(Max--){
		for(int i=0;i<n;i++){
			if(arr[i]==0){
				cout<<"\t";
				continue;
			}
			if(arr[i]>Max){
				cout<<"*\t";
			}else{
				cout<<"\t";
			}
		}
		cout<<endl;
	}
	return 0;   
}