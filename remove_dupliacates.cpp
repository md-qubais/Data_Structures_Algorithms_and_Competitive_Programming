#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void remove_duplicate(string s,string &ans,int i){
 	
 }
 string removeDuplicates(string S) {
        string ans="";
        remove_duplicate(S,ans,0);
        return ans;
 }
int32_t main(){
	qubais_judge;
	IOS;
	string s1;
	cin>>s1;
	cout<<removeDuplicates(s1)<<endl;
	return 0;   
}