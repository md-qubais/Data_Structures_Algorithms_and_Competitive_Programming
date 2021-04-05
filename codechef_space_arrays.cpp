#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void do_this(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int res=0;
	int t=0;
	for(int i=0;i<n;i++){
		if(arr[i]>i+1){
			t=1;
			break;
		}
		res+=(i+1-arr[i]);
	}
	if(t==1){
		cout<<"Second"<<endl;
	}else{
		if(res%2==1){
			cout<<"First"<<endl;
		}else{
			cout<<"Second"<<endl;
		}
	}
}
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		do_this();
	}
    return 0;
}