#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int coin_change(int *coins,int num,int money){
	int ans=0;
	while(money>0){
		//sub with -1 becaue if the number
		//is not present it will give next greatest
		//number to it or it wont give next greater
		//it will give directly after the last element
		//if no number is greater than that number
	auto it=upper_bound(coins,coins+num,money)-1;
	int index=it-coins;//to get the exact location
    money=money-coins[index];
    cout<<coins[index]<<endl;
    ans++;
	}
	return ans;

}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int coins[]={1,2,5,10,20,50,100,200,500,2000};
	int money;
	cin>>money;
	int res=coin_change(coins,sizeof(coins)/sizeof(int),money);
	cout<<"The total no of coins are:"<<res<<endl;
	return 0;     
}