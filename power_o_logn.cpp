#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


//using bitmasking
int power_bits(int n,int x){
	int sum=1;
	while(x){
		if(x&1){
			sum*=n;
		}
		n*=n;
		x=x>>1;
	}
	return sum;
}



int power(int n,int x){
	if(x==1){
		return n;
	}
	return n*power(n,x-1);
}


int32_t main(){
	qubais_judge;
	IOS;
	int n,x;
	cin>>n>>x;
    cout<<power(n,x)<<endl;
	cout<<power_bits(n,x)<<endl;
	return 0;   
}


