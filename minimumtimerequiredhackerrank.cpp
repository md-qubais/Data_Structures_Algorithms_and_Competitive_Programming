#include<bits/stdc++.h>
using namespace std;
bool candothat(vector<long> res,long goal,long mid){
long count=1;
long i=0;
long ans=res[0];
while(count<=goal){
    if(i<res.size()){
if(ans+res[i]<=mid){
ans+=res[i];
count++;
}else{
    i++;
    ans=0;
}
}else{
if(count>=goal){
return true;
}else{
    return false;
}
 
    return false;
}
}
return true;
}

long minTime(vector<long> machines, long goal) {
long s=goal/machines.size()*(*min_element(machines.begin(),machines.end()));
long e=goal/machines.size()*(*max_element(machines.begin(),machines.end()));
long ans=LONG_MAX;

while(s<=e){
    long mid=(s+e)/2;

if(candothat(machines,goal,mid)){
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
    long n,goal;
    cin>>n>>goal;
    vector<long> res;
    for(long i=0;i<n;i++){
    long a;
    cin>>a;
    res.push_back(a);
    } 
  cout<<minTime(res,goal)<<endl;
 return 0;
 }