#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string maximum(string s,int k,int i){
	if(k==0){
		return s;
	}
	string ans=s;
	for(int j=i;j<s.length()-1;j++){
		swap(s[j],s[j+1]);
		ans=max(ans,maximum(s,k-1,0));
		swap(s[j],s[j+1]);
	}
	return ans;
}
string get_max(string s,int k){
	return maximum(s,k,0);
}
int32_t main(){
	qubais_judge;
	IOS;
	string s;
	cin>>s;
	int k;
	cin>>k;
	cout<<get_max(s,k);
	return 0;
}