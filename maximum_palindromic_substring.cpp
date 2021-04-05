#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


bool palindrome(string ans){
	int i=0;
	int j=ans.length()-1;
	while(i<j){
		if(ans[i++]!=ans[j--]){
			return false;
		}
	}
	return true;
}

string longest(string str){
	int max_length=INT_MIN;
	string ans="";
	for(int i=0;i<str.length();i++){
		for(int j=i;j<str.length();j++){
			string temp="";
			for(int k=i;k<=j;j++){
				temp+=str[k];
			}
			if(palindrome(temp)){
				if(max_length<temp.length()){
					max_length=temp.length();
					ans=temp;
				}
			}
		}
	}
	return ans;
}


int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	cout<<longest(str);
	return 0;   
}