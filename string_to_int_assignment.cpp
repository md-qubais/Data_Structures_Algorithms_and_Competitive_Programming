#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int str_to_int(string str,int n){
	if(n==0){
		return str[0]-'0';
	}
	return str_to_int(str,n-1)*10+str[n]-'0';
}

int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	cout<<str_to_int(str,str.length()-1)<<endl;
	return 0;   
}