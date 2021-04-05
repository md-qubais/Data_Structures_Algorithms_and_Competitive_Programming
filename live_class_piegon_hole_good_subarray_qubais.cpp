#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int good_subarrays(int n){
	int ans=0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int csum[n];
	csum[0]=arr[0]%n;
	for(int i=1;i<n;i++){
		csum[i]=(csum[i-1]+arr[i])%n;
	}
	int f[n]={0};
	f[0]++;
	for(int i=0;i<n;i++){
		f[csum[i]]++;
	}

	for(int i=0;i<n;i++){
	}
	ans=0;
	for(int i=0;i<n;i++){
		ans+=(f[i]*(f[i]-1))/2;
	}
	return ans;
}


int32_t main(){
	qubais_judge;
	IOS;
	int num;
	cin>>num;
	cout<<good_subarrays(num)<<endl;
	return 0;   
}