#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string shiftingLetters(string s, vector<int>& shifts){
	
	return s;
}

int32_t main(){
	qubais_judge;
	IOS;
	string s="abc";
	int num=s[0]-'a';
	num=(num+2)%27;
	s[0]=(char)(num+'a');
	cout<<s<<endl;
	return 0;   
}