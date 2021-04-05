#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void do_it(string str){
	if(str.length()==0){
		return;
	}
	if(str[0]>='A' and str[0]<'Z'){
		str[0]=str[0]+32;
		cout<<str[0];
	}else{
		str[0]=str[0]-32;
		cout<<str[0];
	}
	do_it(str.substr(1));

}



int32_t main(){
	qubais_judge;
	IOS;	
	string str;
	cin>>str;
	do_it(str);
	cout<<endl;
	return 0;   
}