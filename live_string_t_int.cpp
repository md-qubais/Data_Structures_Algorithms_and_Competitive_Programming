#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int string_toi_int(string str,int n,int i,int &ans){
	if(i==n){
		return ans;
	}
	ans=ans*10+str[i]-'0';
	return string_toi_int(str,n,i+1,ans);
}


int convert(string str,int i,int &ans){
	static int inc=1;
	if(i<0){
		return ans;
	}
	ans+=(str[i]-'0')*inc;
	inc*=10;
	return convert(str,i-1,ans);
}

int sir(string str,int i){
	if(i==0){
		return str[i]-'0';
	}
	return sir(str,i-1)*10+(str[i]-'0');
}


int32_t main(){
	qubais_judge;
	IOS;	
	string str;
	cin>>str;
	int ans=0;
	cout<<sir(str,str.length()-1);
	
	return 0;   
}