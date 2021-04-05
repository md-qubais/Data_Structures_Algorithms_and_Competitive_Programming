#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//yes it will change the time complexicity
//if we have duplicates
int findMin(vector<int>& v){
	int s=0;
	int l=v.size()-1;
	int ans=INT_MAX;
	int index=-1;
	while(s<=l){
		int mid=(s+l)/2;
		if(s==mid or mid+1==l){
			if(ans>=v[s]){
				ans=v[s];
				index=s;
			}
			if(ans>=v[mid]){
				ans=v[mid];
				index=mid;
			}
			if(ans>=v[mid+1]){
				ans=v[mid+1];
				index=mid;
			}
			if(ans>=v[l]){
				ans=v[l];
				index=l;
			}
			break;
		}
		//first part is sorted
		if(v[s]<=v[mid] ){
			if(v[s]==v[mid]){
				//search even here also
				for(int i=s;i<=mid;i++){
					if(ans>=v[i]){
						ans=v[i];
						index=i;
					}
				}
			}
			if(ans>=v[s]){
				ans=v[s];
				index=s;
			}
			s=mid;
		}
		//if first is not sorted then obviously 
		//second will the sorted one
		else{
			if(v[mid+1]==v[l]){
				//search even here also
				for(int i=mid+1;i<=l;i++){
					if(ans>=v[i]){
						ans=v[i];
						index=i;
					}
				}
			}
			if(ans>=v[mid+1]){
				ans=v[mid+1];
				index=mid+1;
			}
			l=mid;
		}
	}


	return ans;
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
	cout<<findMin(v);
	return 0;   
}