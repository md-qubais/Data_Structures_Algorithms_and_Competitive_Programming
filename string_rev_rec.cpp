#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void rev(string str){
	if(str.length()==0){
		return;
	}
	rev(str.substr(1));
	cout<<str[0]<<"";
}


int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	rev(str);
	return 0;   
}