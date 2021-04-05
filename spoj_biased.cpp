#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int abs(int i,int j){
	if(i-j>=0){
      return i-j;
	}
	return j-i;

}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	while(t--){
		vector<pair<int,string>> v;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
             string str;
             int num;
             cin>>str>>num;
             v.push_back(make_pair(num,str));
		}
		sort(v.begin(),v.end());
		int rank=1;
		int res=0;
		for(auto it:v){
			res+=abs(rank,it.first);
			rank++;
		}
          cout<<res<<endl;
	}
	return 0;     
}