#include<bits/stdc++.h>
#define ll      long long
using namespace std;
ll arr[1000];
vector<int> make_primes(){
vector<int> res;
arr[0]=arr[1]=0;
arr[2]=1;
for(int i=3;i<=1000;i=i+2){
arr[i]=1;
}
for(int i=3;i<=1000;i=i+2){
for(int j=i*i;j<=1000;j=i+j){
arr[j]=0;
}
}

for(int i=2;i<=1000;i++){
if(arr[i]==1)  res.push_back(i);
}
return res;
}   
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   vector<int> primes;
   primes=make_primes();
    ll n;
    cin>>n;
    while(n--){
      ll num;
      cin>>num;
     cout<<primes[num-1]<<endl;
    }
   return 0;
}