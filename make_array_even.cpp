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
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int count=0;
		for(int i=0;i<n-1;i++){
			if(arr[i]%2!=0){
				count++;
				int a=arr[i];
				int b=arr[i+1];
				arr[i]=a+b;
				arr[i+1]=a-b;
				i--;
			}
		}
		cout<<count<<endl;
	}
	return 0;   
}