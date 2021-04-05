#include<bits/stdc++.h>
using namespace std;
bool ispossible(int *arr,int n,int m,int curr){
int studentused=1;
int page=0;
for(int i=0;i<n;i++){
if(page+arr[i]>curr){
studentused++;
page=arr[i];
if(studentused>m){
return false;
}
}else{
	page=page+arr[i];
}
}
return true;
}
int findpage(int *arr,int n,int m){
int sum=0;
if(n<m){
return false;
}
for(int i=0;i<n;i++){
sum=sum+arr[i];
}
int s=arr[n-1];
int e=sum;
int ans=INT_MAX;
while(s<=e){
int mid=(s+e)/2;
if(ispossible(arr,n,m,mid)){
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
      int num;
      int std;
      cin>>num>>std;
      int arr[num];
      for(int i=0;i<num;i++){
     cin>>arr[i];
      }
      cout<<findpage(arr,num,std);
    }
    return 0;
}