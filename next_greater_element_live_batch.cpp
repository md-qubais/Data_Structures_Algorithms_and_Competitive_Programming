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
		stack<int> s;
		int ans[n]={0};
		for(int i=n-1;i>=0;i--){
			while(!s.empty() and s.top()<arr[i]){
				s.pop();
			}
			if(s.empty()==true){
				ans[i]=-1;
				s.push(arr[i]);
			}else{
				ans[i]=s.top();
				s.push(arr[i]);
			}
		}
		for(int i=0;i<n;i++){
			cout<<arr[i]<<","<<ans[i]<<endl;
		}
	}
	return 0;   
}