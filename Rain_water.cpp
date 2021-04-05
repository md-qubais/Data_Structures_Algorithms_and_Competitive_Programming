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
		int sum=0;
		for(int i=0;i<num;i++){
			int left=INT_MIN;
			int right=INT_MIN;
			for(int j=i-1;j>=0;j--){
				if(left<arr[j]){
					left=arr[j];
				}
			}
			for(int j=i+1;j<num;j++){
				if(right<arr[j]){
					right=arr[j];
				}
			}
			int Min=min(left,right);
			if(Min>arr[i]){
              sum+=Min-arr[i];
			}

		}
		cout<<sum<<endl;
	}
    return 0;   
}