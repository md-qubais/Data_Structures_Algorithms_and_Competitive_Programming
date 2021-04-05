#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int string_toi_int(string str,int n,int i,int &ans){
	if(i==n){
		return ans;
	}
	ans=ans*10+str[i]-'0';
	return string_toi_int(str,n,i+1,ans);
}


int32_t main(){
	qubais_judge;
	IOS;	
	string str;
	cin>>str;
	int ans=0;
	string_toi_int(str,str.length(),0,ans);
	cout<<ans<<endl;
	return 0;   
}