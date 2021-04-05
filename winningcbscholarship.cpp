#include<bits/stdc++.h>
using namespace std;
bool cangive(int n,int m,int x,int y,int mid){
if(mid*x<=m+(n-mid)*y){
return true;
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
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    int s=0,e=n;
    int ans=INT_MIN;
    while(s<=e){
    int mid=(s+e)/2;
    if(cangive(n,m,x,y,mid)){
     
      ans=max(ans,mid);
      s=mid+1;
    }else{
        e=mid-1;
    }
    }
    cout<<ans<<endl;
    return 0;
}