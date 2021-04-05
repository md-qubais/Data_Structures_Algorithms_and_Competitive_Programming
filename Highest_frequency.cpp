#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	int max=0;
	int res=0;
	unordered_map<int,int> m;
	for(int i=0;i<num;i++){
		int n;
		cin>>n;
		m[n]++;
		if(m[n]>max){
			max=m[n];
			res=n;
		}
	}
	cout<<res<<endl;
	return 0;     
}