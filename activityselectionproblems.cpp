#include<bits/stdc++.h>
using namespace std;   
bool compare(pair<int,int> p1,pair<int,int> p2){
return p1.first<p2.first;
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
    pair<int,int> p[num];
    int a,b;
    for(int i=0;i<num;i++){
    	cin>>a>>b;
      p[i]=make_pair(a,b);
    }
    sort(p,p+num);
    for(int i=0;i<num;i++){
          cout<<p[i].first<<" "<<p[i].second<<endl; 
    }
    sort(p,p+num,compare);
    cout<<endl;
    for(int i=0;i<num;i++){
          cout<<p[i].first<<" "<<p[i].second<<endl; 
    }
    int count=1;
    int workend=1;
    for(int i=1;i<num;i++){
       if(p[i].first>=workend){
             workend=p[i].second;
             count++;
       }
    }
    cout<<count<<endl;
    }
   return 0;
}


/*#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<int, int>&x, const pair<int, int>&y){
    return x.second < y.second;
}

int solve(vector<pair<int,int>>v){
    vector<pair<int,int>>::iterator itr1;
    vector<pair<int,int>>::iterator itr2;
    int cnt = 1;
    for(itr1 = v.begin(), itr2 = v.begin()+1; itr2 != v.end(); ++itr2){
        
        if(itr2->first >= itr1->second){
            itr1 = itr2;
            cnt++;
        }
    }
    return cnt;
}

int main() {
		#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>>v;
		int s, e;
		for(int i = 0; i < n; i++){
			cin>>s>>e;
			v.push_back(make_pair(s, e));
		}
		sort(v.begin(), v.end(), comp);

        ///vector<pair<int,int>>:: iterator itr;
    
        for(itr = v.begin(); itr != v.end(); ++itr){
            cout<<itr->first<<" "<<itr->second<<endl;
        }
        
        cout<<solve(v)<<endl;
	}
return 0;
} */