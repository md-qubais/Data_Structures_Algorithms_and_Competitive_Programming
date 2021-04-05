#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int get_small(int *arr,int n){
	int ans=INT_MAX;
	int s=0;
	int e=n-1;
	while(s<=e){
		//first part is sorted
		int mid=(s+e)/2;
		if(s+1==e or s==e){
			ans=min(arr[s],ans);
			ans=min(arr[e],ans);
			break;
		}
		if(arr[s]<=arr[mid] ){
			ans=min(arr[s],ans);
			s=mid;
		}else{
			ans=min(arr[mid+1],ans);
			e=mid;
		}
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<get_small(arr,n);
	return 0;
}