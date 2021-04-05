#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool search(vector<int>& v, int k){
	int s=0;
	int e=v.size()-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(v[s]==k){
			return true;
		}
		if(v[mid]==k){
			return true;
		}
		if(v[e]==k){
			return true;
		}
		//if the first half is sorted
		if(v[s]<=v[mid]){
			//see that if it can get any duplucates
			if(v[s]==v[mid]){
				for(int j=s;j<=mid;j++){
					if(v[j]==k){
						return true;
					}
				}
			}//if its lies on the first half
			
				if(v[s]<=k and k<=v[mid]){
					e=mid-1;
				}else{
					s=mid+1;
				}
			

		}
		//if not then second will the sorted
		else{
			//let us see if here we can enocounter
			//any duplicates
			if(v[mid+1]==v[e]){
				for(int j=mid+1;j<=e;j++){
					if(v[j]==k){
						return true;
					}
				}
			}
			if(v[mid+1]<=k and k<=v[e]){
				s=mid+1;
			}else{
				e=mid-1;
			}
		}
	}
	return false;
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