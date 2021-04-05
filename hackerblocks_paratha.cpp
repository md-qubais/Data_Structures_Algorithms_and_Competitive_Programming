#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define fori(n) for(int i=0;i<n;i++)
#define ford(n) for(int i=n-1;i>=0;i--)
#define fr(x,n) for(int i=x;i<n;i++)
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool is_possible(vector<int>arr,int p,int mid){
	for(int i=0;i<arr.size();i++){
		int total_time=0;
		int inc=1;
		while(total_time+inc*arr[i]<=mid){
			p--;
			total_time=total_time+inc*arr[i];
			inc++;
		}
		if(p<=0){
			return true;
		}
	}
	if(p<=0){
		return true;
	}
	return false;
}
int paratha(vector<int>&arr,int p){
	int s=0;
	int e=INT_MAX;
	int ans=0;
	while(s<=e){
		int mid=(s+e)/2;
		if(is_possible(arr,p,mid)){
			ans=mid;
			e=mid-1;
		}else s=mid+1;
	}
	return ans;

}
int32_t main(){
	qubais_judge;
	IOS;
	int p;
	cin>>p;
	int n;
	cin>>n;
	vector<int> arr(n);
	fori(n) cin>>arr[i];
	cout<<paratha(arr,p)<<endl;
	return 0;
}