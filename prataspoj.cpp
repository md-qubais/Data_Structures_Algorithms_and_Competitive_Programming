#include<bits/stdc++.h>
#define ll   long long
using namespace std;   

int cancook(int *arr,int p,int c,int time){
int pratas=1;
int cook=1;
int k=2;
int j=0;
int sum=arr[0];
if(time<1){
return false;
}

for(int i=1;i<p;i++){
if(sum+k*arr[j]>time){
k=2;
pratas++;
sum=arr[++j];
if(j>=c){
return false;
}
}else{
sum=sum+k*arr[j];
k++;
pratas++;
}
}

return true;
}

int getmintime(int *arr,int pratas,int cooks){
int sum=0;
for(int i=1;i<=pratas;i++){
sum+=i;
}
int s=0;
int e=sum;
int ans=INT_MAX;
int mid;
while(s<=e){
	mid=(s+e)/2;

if(cancook(arr,pratas,cooks,mid)){
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
    int pratas,cooks;
    cin>>pratas>>cooks;
    int arr[cooks];
    for(int i=0;i<cooks;i++){
     cin>>arr[i];
    }
    cout<<getmintime(arr,pratas,cooks)<<endl;

        }
    return 0;    
}