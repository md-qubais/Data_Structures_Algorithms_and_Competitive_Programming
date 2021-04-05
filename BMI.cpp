#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int bmi(int n){
	if(n<=18){
		return 1;
	}else if(n>=19 and n<=24){
		return 2;
	}else if(n>=25 and n<=29){
		return 3;
	}
	return 4;
}
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		int m;
		int h;
		cin>>m>>h;
		cout<<bmi(m/(h*h))<<endl;
	}
	return 0;   
}