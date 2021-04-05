#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int search(vector<int>& v, int k){
	int s=0;
	int e=v.size()-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(v[mid]==k){
			return mid;
		}
		if(v[s]==k){
			return s;
		}
		if(v[e]==k){
			return e;
		}
		//if the first half is sorted
		if(v[s]<=v[mid]){
			if(v[s]<=k and k<=v[mid]){
				e=mid-1;
			}else{
				s=mid+1;
			}
		}
		//if the second half is sorted
		else{
			if(v[mid+1]<=k and k<=v[e]){
				s=mid+1;
			}else{
				e=mid-1;
			}
		}
	}
	return -1;
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
	int k;
	cin>>k;
	cout<<search(v,k)<<endl;
	return 0;
}