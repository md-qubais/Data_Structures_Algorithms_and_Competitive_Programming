#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int singleNonDuplicate(vector<int>& arr) {
	int s=0;
	int e=arr.size()-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(mid>=0 and mid<=arr.size()-1 and arr[mid]!=arr[mid-1] and arr[mid]!=arr[mid+1]){
			return mid;
		}
		if(){

		}
		if(){

		}
		//first half


		//second half

	}
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<singleNonDuplicate(v);
	return 0;   
}