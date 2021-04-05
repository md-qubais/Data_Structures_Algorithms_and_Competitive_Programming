#include<bits/stdc++.h>
#define ll      long long
using namespace std;
bool canchop(ll *arr,ll trees,ll required,ll mid){
ll sum=0;
for(int i=0;i<trees;i++){
if(arr[i]>=mid){
 sum=sum+arr[i]-mid;
}
}
if(sum>=required){
return true;
}
return false;
}   
ll cutwood(ll *arr,ll trees,ll required){
ll max=0;
for(ll i=0;i<trees;i++){
if(arr[i]>max){
max=arr[i];
}
}
ll s=0;
ll e=max;
ll ans=0;
while(s<=e){
ll mid=(s+e)/2;
if(canchop(arr,trees,required,mid)){
ans=mid;
cout<<mid<<endl;
s=mid+1;
}else{
e=mid-1;
}
}
return ans;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t>0){
      t--;
      ll trees,required;
      cin>>trees>>required;
      ll arr[trees];
      for(ll i=0;i<trees;i++){
        cin>>arr[i];
      }


      cout<<cutwood(arr,trees,required)<<endl;
    }

    return 0; 
    
}