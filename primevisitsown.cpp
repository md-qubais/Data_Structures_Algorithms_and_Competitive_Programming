#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll c[1000005]={0};
void prime(ll *arr){
arr[0]=arr[1]=0;
arr[2]=1;
for(ll i=3;i<=1000000;i=i+2){
arr[i]=1;
}
for(ll i=3;i<=1000000;i=i+2){
for(ll j=i*i;j<=1000000;j=j+i){
arr[j]=0;
}
}
}
int main() {
	ll arr[1000005]={0};
    prime(arr);
	c[0]=0;
    for(ll i=1;i<=1000000;i++){
    c[i]=c[i-1]+arr[i];
	}
	ll n;
	cin>>n;
	while(n--){
     ll a,b;
	 cin>>a>>b;
	 cout<<c[b]-c[a-1]<<endl;
	}
	return 0;
}