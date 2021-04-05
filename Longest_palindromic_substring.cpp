#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

bool isPalindrome(string str,int i,int j){
	while(i<=j){
		if(str[i]!=str[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}


int32_t main(){
	qubais_judge;
	IOS;
	string str;
	cin>>str;
	int n=str.length();
	int ans=0;
	int i1=0,j2=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(isPalindrome(str,i,j)){
				ans=max(ans,j-i+1);
				i1=i;
				j2=j;
			}
		}
	}
	cout<<ans<<endl;
	cout<<i1<<" "<<j2<<endl;
	return 0;   
}