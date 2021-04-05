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
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int brr[n];
	for(int i=0;i<n;i++){
		brr[arr[i]]=i;
	}
	for(int i=0;i<n;i++){
		cout<<brr[i]<<" ";
	}
	cout<<endl;
    return 0;   
}