#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool is_palindrome(char *out,int i,int j){
	while(i<j){
		if(out[i++]!=out[j--]){
			return false;
		}
	}
	return true;
}
int lps(char *in,char *out,int i,int j,int n){
	if(i>n){
		out[j]='\0';
		if(is_palindrome(out,0,j-1)){
			return j;
		}
		return 0;
	}
	out[j]=in[i];
	int ans1=lps(in,out,i+1,j+1,n);
	int ans2=lps(in,out,i+1,j,n);
	return max(ans1,ans2);
}
int32_t main(){
	qubais_judge;
	IOS;
	char ch[100];
	cin>>ch;
	int n=strlen(ch)-1;
	char out[100];
	cout<<lps(ch,out,0,0,n);
	return 0;   
}