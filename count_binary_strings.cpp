#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int dp[100]={0};
bool contains(string s){
	for(int i=0;i<s.length()-1;i++){
		if(s[i]=='0' and s[i+1]=='0'){
			return true;
		}
	}
	return false;
}
int count(int n,string s){
	if(n==0){
		return 1;
	}
	int ans1=0;
	int ans2=0;
	if(s.length()==0){
		//we can put both
		ans1=count(n-1,s+"0");
		ans2=count(n-1,s+"1");
	}else if(s[s.length()-1]=='0'){
		//can put only one
		ans1=count(n-1,s+"1");
	}else{
		ans1=count(n-1,s+"0");
		ans2=count(n-1,s+"1");
	}
	return ans1+ans2;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	cout<<count(n,"")<<endl;
	return 0;   
}