#include <bits/stdc++.h>
using namespace std;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
using Int = long long;
const char newl = '\n';

//INSERT ABOVE HERE
signed solve(){
  int n;
  cin>>n;
  vector<int> as(n);
  for(int i=0;i<n;i++) cin>>as[i];

  const int M = 4;
  vector<int> dp(M,0);
  for(int i=1;i<n;i++){
    vector<int> nx(M,n+1);
    for(int x=0;x<M;x++){
      for(int y=0;y<M;y++){
        int cost=1;
        if(x<y and (as[i-1]<as[i])) cost=0;
        if(x>y and (as[i-1]>as[i])) cost=0;
        if(x==y and (as[i-1]==as[i])) cost=0;
        chmin(nx[y],dp[x]+cost);
      }
    }
    swap(dp,nx);
  }
  cout<<*min_element(dp.begin(),dp.end())<<newl;
  return 0;
}

signed main(){
  #ifndef qubais_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  cin.tie(0);
  ios::sync_with_stdio(0);
  int T;
  cin>>T;
  for(int t=1;t<=T;t++){
    cout<<"Case #"<<t<<": ";
    solve();
  }

  return 0;
}
