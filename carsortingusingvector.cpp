#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
bool compare(pair<int,int> p1,pair<int,int> p2){
int d1,d2;
d1=p1.first*p1.first+p1.second*p1.second;
d2=p2.first*p2.first+p2.second*p2.second;
if(d1==d2){
return p1.first<p2.first;
}
return d1<d2;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
    	int x,y;
    	cin>>x>>y;
    v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<n;i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}