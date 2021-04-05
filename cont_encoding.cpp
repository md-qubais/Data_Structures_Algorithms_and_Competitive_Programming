#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

https://leetcode.com/problems/decode-ways/
https://leetcode.com/problems/ones-and-zeroes/

int numDecodings(string s){
	int dp[s.length()+1]={0};
	dp[0]=dp[1]=1;
	for(int i=2;i<=s.length();i++){
		char prev=s[i-2];
		char curr=s[i-1];
		if(prev=='0'){
			if(curr=='0'){
				dp[i]=0;
			}else{
				dp[i]=dp[i-1];
			}
		}else if(curr=='0'){
			int num=((int)s[i-2])*10+((int)s[i-1]);
			if(num<=26){
				dp[i]=dp[i-2];
			}
		}
		else{
				dp[i]=dp[i-1];
			int num=((int)s[i-2])*10+((int)s[i-1]);
			if(num<=26){
				dp[i]+=dp[i-2];
			}		
			}
		}
	
	return dp[s.length()];
}
int32_t main(){
	qubais_judge;
	IOS;
	string s;
	cin>>s;
	cout<<numDecodings(s)<<endl;
	return 0;   
}