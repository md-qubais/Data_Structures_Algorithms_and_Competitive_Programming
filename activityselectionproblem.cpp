#include<bits/stdc++.h>
using namespace std;   
bool compare(pair<int,int> p1,pair<int,int> p2){
return p1.second<p2.second;
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
    while(n>0){
    	n--;
    	int num;
    	cin>>num;
    	vector<pair<int,int>> v;
    	for(int i=0;i<num;i++){
             int a,b;
             cin>>a>>b;       
             v.push_back(make_pair(a,b));
     	}
     	sort(v.begin(),v.end(),compare);
     	int count=1;
     	int end=v[0].second;
     	for(int i=1;i<v.size();i++){
           if(v[i].first>=end){

                 end=v[i].second;
                 count++;
           }
     	}
     	cout<<count<<endl;
    }
    return 0;
}