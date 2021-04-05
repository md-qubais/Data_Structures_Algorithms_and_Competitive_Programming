#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
/*
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/
vector<pair<int,char>> v={
	{1,'I'},
	{5,'V'},
	{10,'X'},{50,'L'},{100,'C'},{500,'D'},{1000,'M'}
};
string intToRoman(int num) {
	string ans="";
	while(num>0){
		pair<int,char> p={num,' '};
		auto it=lower_bound(v.begin(),v.end(),p);
		if(it==v.end()){
			ans+=(it-1)->second;
			num-=(it-1)->first;
			continue;
		}
		int temp=it->first-num;
		if(temp==0){
			ans+=it->second;
			num=temp;
		}else{
			ans+=(it-1)->second;
			num-=(it-1)->first;
		}
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	cout<<intToRoman(n)<<endl;
	return 0;   
}