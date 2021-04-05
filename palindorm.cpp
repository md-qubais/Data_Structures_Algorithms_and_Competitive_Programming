#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string palindrome(char *ch){
int length=strlen(ch);
int i=0,j=length-1;
while(i<j){
	if(ch[i]!=ch[j]){
		return "no";
	}
	i++;
	j--;

}
return "yes";
}



int32_t main(){
	qubais_judge;
	IOS;
	char ch[100];
	cin>>ch;
	cout<<palindrome(ch)<<endl;
	return 0;   
}