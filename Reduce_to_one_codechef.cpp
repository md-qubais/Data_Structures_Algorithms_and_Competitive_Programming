#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define ll long long
#define endl  "\n"
using namespace std;
//this below is the best idea of the competitive
//porgramming we have to calculate each and every
//thing previously and only once to contribute
//the answer and to write the answer and to get the 
//required answer
//without getting tle and Time Limit Exceeded
ll arr[1000000+1];
int main(){
	IOS;
	arr[1]=1;
	for(ll i=2;i<1000000+1;i++){
	    arr[i]=(arr[i-1]+(i)+(arr[i-1]*(i)))%1000000007;
	}
	int t;
	cin>>t;
	
	while(t--){
		ll num;
		cin>>num;
	   	
		cout<<arr[num]<<endl;
	}
	return 0;     
}