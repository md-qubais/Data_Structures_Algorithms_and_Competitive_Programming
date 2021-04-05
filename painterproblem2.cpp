
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool canpaint(ll *arr,ll painter,ll boards,ll mid){
ll p=1;
ll sum=arr[0];

for(ll i=1;i<boards;i++){
if(sum+arr[i]<=mid){
sum=sum+arr[i];
}
else{
	sum=arr[i];
	p++;
	if(p>painter){
      return false;
	}
}
}
if(sum>mid){
return false;
}
return true;
}
ll paintmin(ll *arr,ll painter,ll boards){
ll sum=0;
ll Max=0;
for(ll i=0;i<boards;i++){
sum+=arr[i];
Max=max(Max,arr[i]);
}
sort(arr,arr+boards);
ll s=0;
ll ans=Max;
ll e=sum;
while(s<=e){
ll mid=(s+e)/2;
if(canpaint(arr,painter,boards,mid)){
ans=min(ans,mid);
e=mid-1;
}else{
s=mid+1;
}
}
return ans;
}
using namespace std;
int main() 
{

    #ifndef qubais_judge
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll painter,boards;
    cin>>painter>>boards;
    ll arr[boards];
    for(ll i=0;i<boards;i++){
     cin>>arr[i];
    }
    cout<<paintmin(arr,painter,boards)<<endl;
    return 0;
}