#include<bits/stdc++.h>
using namespace std;
bool candothat(int *arr,int n,int std,int mid){
int studentused=1;
int page=0;
for(int i=0;i<n;i++){
if(arr[i]+page>mid){
studentused++;
page=arr[i];
if(studentused>std){
return false;
}

}else{
	page+=arr[i];
}
}

return true;
}
int getmin(int *arr,int n,int std){
int sum=0;
if(n<std){
return -1;
}
for(int i=0;i<n;i++){
sum+=arr[i];
}
int s=arr[n-1];
int e=sum;
int ans=INT_MAX;
while(s<=e){
int mid=(s+e)/2;
if(candothat(arr,n,std,mid)){
ans=min(ans,mid);
e=mid-1;
}else{
	s=mid+1;
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
    int t;
    cin>>t;
    while(t>0){
    	t--;
       int num,std;
       cin>>num>>std;
       int arr[num];
       for(int i=0;i<num;i++){
       cin>>arr[i];
       }
      cout<<getmin(arr,num,std);
    }
    return 0;
}