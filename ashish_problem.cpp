#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
/*
Rejected: If the number of problems that
 the candidate 
solved is strictly less than ceil(N/2).

Too Slow: If candidate is not Rejected 
and candidate took more than K seconds to solve
 at least one problem among the problems solved by the candidate.

Bot: If candidate is neither Rejected 
nor Too Slow, but has solved all of the N problems 
in at most one second each.

Accepted: If the candidate is neither Rejected,
 Too Slow, nor Bot, she is Accepted.
*/
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		double n;
		cin>>n;
		int k;
		cin>>k;
		int n1=n;
		int arr[n1];
		int more=0;
		double no=0;
		int solve=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]==-1){
				no++;
			}
			if(arr[i]>k){
				more++;
			}
			if(arr[i]>=0 and arr[i]<=1){
				solve++;
			}
		}
		double d=ceil(n/2);
		//cout<<d<<endl;
		if((n-no)<d){
			cout<<"Rejected"<<endl;
			continue;
		}
		if(more>0){
			cout<<"Too Slow"<<endl;
			continue;
		}
		if(solve==n){
			cout<<"Bot"<<endl;
			continue;
		}
		cout<<"Accepted"<<endl;
	}
	return 0;
}