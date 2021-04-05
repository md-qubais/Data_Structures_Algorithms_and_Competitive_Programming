#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	cout<<str[0];
	for(int i=1;i<str.length();i++){
		if(str[i]>='A' and str[i]<='Z'){
			cout<<endl;
			cout<<str[i];
		}else{
			cout<<str[i];
		}
	}
	return 0;   
}