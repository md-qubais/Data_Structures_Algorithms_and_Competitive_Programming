#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int32_t main(){
	qubais_judge;
	IOS;
	int n1,n2;
	cin>>n1>>n2;
	int arr[n1];
	int brr[n2];
	int Max=INT_MIN;
	for(int i=0;i<n1;i++){
		cin>>arr[i];
		Max=max(Max,arr[i]);
	}
	for(int j=0;j<n2;j++){
		cin>>brr[j];
	}
	int f1[Max+1]={0};
	for(int i=0;i<n1;i++){
		f1[arr[i]]=-1;
	}
	//now here subarrays of b;
	/*
	for(int i=0;i<n2;i++){
		for(int j=i;j<n2;j++){
			for(int k=i;k<=j;k++){
				f1[brr[i]]++;
			}
		}
	}*/
	for(int i=0;i<n2;i++){
		f1[brr[i]]++;
	}
	int ans=0;
	for(int i=0;i<n1;i++){
		if(f1[arr[i]]==-1){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;   
}