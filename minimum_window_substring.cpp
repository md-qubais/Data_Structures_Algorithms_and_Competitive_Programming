#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string minWindow(string str1, string str2) {
	unordered_map<char,int> s1;
	unordered_map<char,int> s2;
	if(str1.length()<str2.length()){
		return "";
	}
	for(int i=0;i<str2.length();i++){
		s2[str2[i]]++;
	}
	int start_index=-1;
	int start=0;
	int count=0;
	int min_length=INT_MAX;
	string ans="";
	for(int i=0;i<str1.length();i++){
		char temp=str1[i];
		s1[temp]++;
		if(s1[temp]<=s2[temp] and s2[temp]>=1){
			count++;
		}
		if(count==str2.length()){
			char ch=str1[start];
			while(s1[ch]>s2[ch] or s2[ch]==0){
				s1[ch]--;
				start++;
				ch=str1[start];
			}
			if(min_length>=(i-start+1)){
				min_length=i-start+1;
				if(min_length==1){
					ans=str1[start];
				}else{
				ans=str1.substr(start,min_length);
			}
		}
	}
}

	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;
	cout<<minWindow(s1,s2)<<endl;
	return 0;   
}