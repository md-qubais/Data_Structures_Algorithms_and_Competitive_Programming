//as we can get any prime number 
//if we specify the position of that number
//positon means if we want to find N prime number
//that this progam will give the value of the
//Nth prime number
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> getprimes(ll *arr){
vector<ll> res;
arr[1]=arr[0]=0;
arr[2]=1;
for(ll i=3;i<=1000000;i=i+2){
arr[i]=1;
}

for(ll i=3;i<=1000000;i=i+2){
for(ll j=i*i;j<=1000000;j=j+i){
arr[j]=0;
}
}
for(int i=2;i<=1000000;i++){
if(arr[i]==1){
res.push_back(i);
}
}
return res;
}
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll arr[1000005];
	vector<ll> primes;
	primes=getprimes(arr);
	int n;
	cin>>n;
	while(n>0){
     n--;
	 ll num;
	 cin>>num;
	 cout<<primes[num-1]<<endl;
	}
	return 0;
}