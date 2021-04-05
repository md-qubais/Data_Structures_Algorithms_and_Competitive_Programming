#include<bits/stdc++.h>
#define ll      long long
using namespace std;
vector<int> getprimefactors(vector<int> primes,int num){
vector<int> res;
/*for(int i=0;i<primes.size();i++){
if(num%primes[i]==0){
  while(num%primes[i]==0){
  	res.push_back(primes[i]);
       num=num/primes[i];
  }
}
}
if(num!=1){
res.push_back(num);
}*/
int i=0;
int p=primes[i];
while(p*p<=num){
if(num%p==0){
while(num%p==0){
	res.push_back(p);
num=num/p;
}
}
p=primes[++i];
}
if(num!=1){
res.push_back(num);
}
return res;
}


vector<int> getprimes(int num){
int arr[num+1]={0};
arr[0]=arr[1]=0;
arr[2]=1;
for(int i=3;i<=num;i=i+2){
arr[i]=1;
}
for(int i=3;i<=num;i=i+2){
for(int j=i*i;j<=num;j=i+j){
arr[j]=0;
}
}
vector<int> res;
for(int i=1;i<=num;i++){
if(arr[i]==1)  res.push_back(i);
}
return res;
}



void bruteforceprimefactor(int n){
for(int i=2;i<=n;i++){
if(n%i==0){
while(n%i==0){
cout<<i<<endl;
n=n/i;
}
}
}
}   
void optimized_approach(int n){
vector<pair<int,int>> v;
for(int i=2;i<=sqrt(n);i++){
if(n%i==0){
	int count=0;
while(n%i==0){
count++;
n=n/i;
}
v.push_back(make_pair(i,count));
}
}
if(n!=1){
v.push_back(make_pair(n,1));
}
for(auto x:v){
cout<<x.first<<" "<<x.second<<endl;
}
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
    int num;
    cin>>num;
    primes=getprimes(num);
    vector<int> factors=getprimefactors(primes,num);
    for(int i=0;i<factors.size();i++){
      cout<<factors[i]<<endl;
    }
    return 0;     
}