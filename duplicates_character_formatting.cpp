#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void get_duplicates(string str,int n,int i){
	if(i==n-1){
		cout<<str[i];
		return;
	}
	if(str[i]==str[i+1]){
		cout<<str[i]<<"*";
	}else{
		cout<<str[i];
	}
	get_duplicates(str,n,i+1);

}
int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	get_duplicates(str,str.length(),0);
	return 0;   
}