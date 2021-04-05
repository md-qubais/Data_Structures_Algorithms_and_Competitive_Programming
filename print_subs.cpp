#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

void printSS(string ques, string ans){
    // write your code here
    if(ques.length()==0){
    	cout<<ans<<endl;
        return;
    }
    printSS(ques.substr(1),ans+ques[0]);
    printSS(ques.substr(1),ans);   
}
int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	printSS(str,"");
	return 0;
}
