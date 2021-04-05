#include<bits/stdc++.h>
#define ll      long long
using namespace std;
void primeseive(ll *arr){
for(ll i=3;i<100000;i=i+2){
arr[i]=1;
}

for(ll i=3;i<100000;i=i+2){
if(arr[i]==1){
 for(ll j=i*i;j<100000;j=j+i){
arr[j]=0;
 }
}
}

arr[1]=0;
arr[2]=1;


}   
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll arr[100000];
    primeseive(arr);
    for(ll i=0;i<100000-1;i++){
           if(arr[i+1]==1){
       cout<<i+1<<" is "<<"prime number"<<endl;
           }else{
           	cout<<i+1<<" is not prime number"<<endl;
           }
    }
    return 0;     
}