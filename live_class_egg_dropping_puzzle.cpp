#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//first linear search
//second binaray search
//and after binary search
//when we got the floor which breaks the egg
//but u only got one egg
//so start checking from the low to the floor
//where the break starts the break
int egg(int n,int k){
	if(k==1){
		return n;//returing the floor 
		//where the eggs break
	}
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	int ans=INT_MAX;
	//try all the floor as the first floor
	for(int i=1;i<=n;i++){
		//we hvae to case
		//if it breaks-->egg(i-1,k-1);
		int v1=max(egg(i-1,k-1),egg(n-i,k));
		//if it wont break-->egg(n-i,k);


		int ans=min(ans,v1);
	}
}


int32_t main(){
	qubais_judge;
	IOS;
	return 0;   
}