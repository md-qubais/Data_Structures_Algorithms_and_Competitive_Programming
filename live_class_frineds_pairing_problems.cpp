#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int no_ways(int n){
	if(n==1 or n==2){
		return n;
	}
	int ans=0;
	ans+=no_ways(n-1);
	ans+=((n-1)*no_ways(n-1));
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	cout<<no_ways(n)<<endl;
	return 0;   
}