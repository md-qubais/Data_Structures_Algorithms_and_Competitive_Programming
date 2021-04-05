#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

string reverseOnlyLetters(string s){
	int i=0;
	int j=s.length()-1;
	while(i<j){
		//65 and 122
		while(i<s.length() and s[i]<65 or s[i]>122 or (s[i]>=91 and s[i]<=96)){
			i++;
		}
		while(j>0 and s[j]<65 or s[j]>122 or (s[j]>=91 and s[j]<=96)){
			j--;
		}
		if(i<j){

		swap(s[i++],s[j--]);
		}
	}
	return s;
}

int32_t main(){
	qubais_judge;
	IOS;
	string s;
	cin>>s;
	cout<<reverseOnlyLetters(s)<<endl;
	return 0;   
}
   