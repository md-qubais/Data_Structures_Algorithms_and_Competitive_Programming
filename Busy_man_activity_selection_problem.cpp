#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2){
	return p1.second<p2.second;

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
		//based upon start time and end time
		//vector<start,end> v;
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
                 int s,e;
                 cin>>s>>e;
                 v.push_back(make_pair(s,e));
		}
		//activity selection algo;
		sort(v.begin(),v.end(),compare);
        int res=1;
        int fin=v[0].second;
        for(int i=1;i<v.size();i++){
        	if(v[i].first>=fin){
        		res++;
        		fin=v[i].second;
        	}

        }
       cout<<res<<endl;
       v.clear();
	}
	return 0;     
}