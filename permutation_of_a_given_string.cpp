#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//ABC in each case every character is fixed
//like below
/*
ABC   BAC    CAB
ACB   BCA    CBA
*/
string comp;
void permutation(string s,string ans){
	if(s.length()==0){
		if(ans>comp){
			cout<<ans<<endl;
		}
	
		return;
	}

	for(int i=0;i<s.length();i++){
		//fixed character
		char ch=s[i];
		string ros=s.substr(0,i)+s.substr(i+1);
		permutation(ros,ans+ch);
	}

}



int32_t main(){
	qubais_judge;
	IOS;	
	string s;
	cin>>s;
	string ans="";
	comp=s;
	sort(s.begin(),s.end());
	permutation(s,ans);
	return 0;   
}