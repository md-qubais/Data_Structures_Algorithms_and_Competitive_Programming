#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int expandmiddle(string s,int left,int right){
	if(s.length()==0 or left<0 or right>s.length()-1){
		return 0;
	}
	while(left>=0 and right<=s.length()-1 and s[left]==s[right]){
		left--;
		right++;
	}
    return	right-left-1;
}
string longestPalindrome(string s){
	if(s.length()==0 ){
		return "";
	}
	if(s.length()==1){
		return s;
	}
	int start=0;
	int end=0;
	for(int i=0;i<s.length();i++){
		int len1=expandmiddle(s,i,i);
		int len2=expandmiddle(s,i,i+1);
		int len=max(len1,len2);
		if(len>end-start){
			start=i-((len-1)/2);
			end=i+(len/2);
		}	
	}
	return s.substr(start,end);
}
int32_t main(){
	qubais_judge;
	IOS;
	string s;
	cin>>s;
	cout<<longestPalindrome(s)<<endl;
	return 0;   
}