#include<bits/stdc++.h>
#include<cstring>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2){
	if(p1.second==p2.second){
   return p1.first<p2.first;
	}
return p1.second<p2.second;
}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS; 
	int num;
	cin>>num;
	vector<pair<int,int>> v;
	for(int i=0;i<num;i++){
        int c,r;
        cin>>c>>r;
        v.push_back(make_pair(c-r,c+r));
	}
	sort(v.begin(),v.end(),compare);
	for(int i=0;i<v.size();i++){
	}
	int res=0;
    int s=v[0].first;
    int e=v[0].second;
    for(int i=1;i<v.size();i++){
       int s1=v[i].first;
       int e1=v[i].second;
            if(e<=s1){
            	s=s1;
            	e=e1;
            }else{
            	res++;
            }
    }

	cout<<res<<endl;
	return 0;     
}