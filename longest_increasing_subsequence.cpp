#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
/*
int lis(int *arr,int *out,int i,int j,int n){
	if(j==n){
		int ans=0;
		int prev=INT_MIN;
		for(int i1=0;i1<i;i1++){
			if(prev<out[i1]){
				prev=out[i1];
				ans++;
			}else{
				break;
			}
		}
		return ans;
	}
	out[i]=arr[j];
	int ans1=lis(arr,out,i+1,j+1,n);
	int ans2=lis(arr,out,i,j+1,n);
	return max(ans1,ans2);
}*/
int lis(int *arr,int idx,int liu,int n){
	if(idx==n){
		return 0;
	}
	int ans1=lis(arr,idx+1,liu,n);
	int ans2=0;
	if(liu==-1 or arr[idx]>arr[liu]){
		ans2=1+lis(arr,idx+1,idx,n);
	}

	return max(ans1,ans2);
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int arr[n]={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<lis(arr,0,-1, n);
	return 0;   
}