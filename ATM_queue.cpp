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
	int t;
	cin>>t;
	int c=0;
	while(t--){
		c++;
		//here first for how many times 
		//and second for that memeber value
		vector<pair<int,int>> v;
		int mem,price;
		cin>>mem>>price;
		for(int i=0;i<mem;i++){
			int n;
			cin>>n;
			float f=(float)n/(float)price;
			int num=f;
			if(f>num){
				num=num+1;
			}
			v.push_back(make_pair(num,i+1));
		}
		sort(v.begin(),v.end());
		cout<<"Case #"<<c<<": ";
		for(auto it:v){
			cout<<it.second<<" ";
		}
		cout<<endl;
	}
	return 0;     
}