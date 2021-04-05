#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int get_ans(int n,int k,int d){
	int count=0;
	int arr[n];
	int sum=0;
	int s1=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		s1=s1+arr[i];
	}
	if(s1==k){
		return 1;
	}
	if(s1<k){
		return 0;
	}
	if(d==0){
		return 0;
	}
	count=s1/k;
	if(count>=d){
		return d;
	}
	return count;
}


int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		int n,k,d;
		cin>>n>>k>>d;
		cout<<get_ans(n,k,d)<<endl;
	}
	return 0;   
}