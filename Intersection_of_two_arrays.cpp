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
    multimap<int,int> m2;
    unordered_map<int,int> m1;
    for(int i=0;i<num;i++){
    	int n;
    	cin>>n;
    	m1[n]+=1;
    } 
    for(int i=0;i<num;i++){
        int n;
        cin>>n;
        m2.insert(make_pair(n,i));
    }   
    vector<int> v;
    for(auto it:m2){
           if(m1[it.first]!=0){
             v.push_back(it.first);
             m1[it.first]--;
           }
    }
    cout<<"[";
    for(auto it=v.begin();it!=v.end();it++){
    	if(it+1!=v.end()){
            cout<<*it<<", ";
    	}
    	else{
    		cout<<*it;
    	}

    }
    cout<<"]";
    return 0;     
}