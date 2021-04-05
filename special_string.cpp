#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
long substrCount(int n, string s) {
	int count=0;
	int i=0;
	int j=0;
	while(i<n and j<n){
		if(i==j){
			count++;
			j++;
		}else{
			if(s[i]==s[j]){
				count++;
				j++;
			}else{
				if(s[i]==s[j+1] and j-i+2==3){
					count++;
					i++;
				}else{
					
				}
			}
		}
	}
	return count;
}
int32_t main(){
	qubais_judge;
	IOS;
	string s;
	cin>>s;
	cout<<substrCount(s.length(),s);
	return 0;   
}