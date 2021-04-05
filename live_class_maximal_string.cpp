#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string res="";
//here k are swaps
void maximal_string(string s,int i,int k){
	int n=s.length();
	if(k==0 or i==n){
		res=max(res,s);
		return;
	}

	//try for all indexes
	for(int j=i+1;j<n;j++){
		swap(s[i],s[j]);
		maximal_string(s,i+1,k-1);
		swap(s[i],s[j]);
	}
	//when we dont swap the ith index
	maximal_string(s,i+1,k);
}


int32_t main(){
	qubais_judge;
	IOS;	
	string str;
	cin>>str;
	res=str;
	maximal_string(str,0,2);
	cout<<res<<endl;
	return 0;   
}