#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
bool compare(pair<string,int> p1,pair<string,int> p2){
if(p1.second==p2.second){
return p1.first<p2.first;
}else if(p1.second<p2.second){
return false;
}else{
return	false;
}
return false;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int minsal;
    cin>>minsal;
    int num;
    cin>>num;
    cin.get();
    pair<string,int> p[num];
    for(int i=0;i<num;i++){
    	string str;
    	int a;
        cin>>str;
    	cin>>a;
      p[i]=make_pair(str,a);
    }
    sort(p,p+num,compare);
    for(int i=0;i<num;i++){
    if(p[i].second>=minsal){
    cout<<p[i].first<<" "<<p[i].second<<endl;
    } 
    }
    return 0;
}