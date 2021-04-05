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
		int n;
		cin>>n;
		vector<int> v(n+1,0);
		for(int i=0;i<n;i++){
			string str;
			int num;
			cin>>str>>num;
			v[num]++;
		}
		int res=0;
		int rank=1;
		for(int i=1;i<=n;i++){
                   while(v[i]!=0){
                   	 res+=abs(rank,i);
                   	 v[i]--;
                          rank++;
                   } 
		}
        cout<<res<<endl; 
	}
	return 0;     
}