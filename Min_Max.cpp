#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int maxMin(int k, vector<int> arr) {
	sort(arr.begin(),arr.end());
	int res=0;
	int num;
  int i=0;
  int Min=INT_MAX;
  int Max=INT_MIN;
  Min=arr[0];
  deque<int> q;
  for(;i<k;i++){
   Max=arr[i];
   q.push_back(arr[i]);
  }
  res=Max-Min;
  for(;i<arr.size();i++){
       q.pop_front();
       Min=q.front();
       q.push_back(arr[i]);
       Max=arr[i];
       res=min(res,Max-Min);
  }

return res;
}

int32_t main(){
	qubais_judge;
	IOS;
	int n;
	int k;
	cin>>n>>k;
	vector<int> v(n);
	for(int i=0;i<n;i++){
       cin>>v[i];
	}
	cout<<maxMin(k,v)<<endl;
	return 0;    
}