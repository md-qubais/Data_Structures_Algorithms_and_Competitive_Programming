#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int kadanes(int *arr,int n){
	int max_so_far=0;
	int curr_max=INT_MIN;
	for(int i=0;i<n;i++){
		max_so_far=max_so_far+arr[i];
		curr_max=max(curr_max,max_so_far);
		if(max_so_far<0){
			max_so_far=0;
		}
	}
	return curr_max;
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
	cout<<kadanes(arr,n);
	return 0;   
}