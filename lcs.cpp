#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int LCS(string str1,string str2,int n,int m){
    if(m==0 or n==0){
        return 0;
    }
    if(str1[n-1]==str2[m-1]){
        return 1+LCS(str1,str2,n-1,m-1);
    }else{
        return max(LCS(str1,str2,n-1,m),LCS(str1,str2,n,m-1));
    }
}
int32_t main(){
	qubais_judge;
	IOS;
	string s1,s2;
	cin>>s1>>s2;
	cout<<LCS(s1,s2,s1.length(),s2.length());
	return 0;   
}