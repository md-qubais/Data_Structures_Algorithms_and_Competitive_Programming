#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int count(string str){
	if(str.length()==0){
		return 1;
	}
	int n1=count(str.substr(1));
	int n2=count(str.substr(1));
	int n3=count(str.substr(1));
	return n1+n2+n3;

}



void subsequences(string str,string ans){
	if(str.length()==0){
		if(ans.length()==0){
			return;
		}
		
		cout<<ans<<" ";
		return;
	}
	subsequences(str.substr(1),ans);
	subsequences(str.substr(1),ans+str[0]);
	//for asciis
	string temp="";
	if(str.length()!=0){
	int num=(int)str[0];
	while(num>0){
		temp+=num%10+'0';
		num=num/10;
	}
}
	reverse(temp.begin(),temp.end());
	//subsequences(str.substr(1),temp);
	subsequences(str.substr(1),ans+temp);
}
int32_t main(){
	qubais_judge;
	IOS;	
	string str;
	cin>>str;
	string ans="";
	int k=0;
	cout<<" "<<"";
	subsequences(str,ans);
	cout<<endl;
	cout<<count(str)<<endl;
	return 0;   
}