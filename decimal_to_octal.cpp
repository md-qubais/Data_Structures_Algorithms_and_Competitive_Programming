#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


string convert_bin(int num){
	string ans="";
     while(num>1){
     	ans+=num%2+'0';
     	num=num/2;
     }
ans+=num+'0';
return ans;
}



int32_t main(){
	qubais_judge;
	IOS;
	int num;
	cin>>num;
	string str=convert_bin(num);
	int k=2;
	string ans="";
	int count=1;
	int n=0;
	if(str[0]=='1'){
		n+=1;
	}
      
	for(int i=1;i<=str.length()-1;i++){
             if(str[i]=='1'){
             	n+=k;
             }
             count++;
             k*=2;
             if(count>=3){
             	count=0;
             	k=1;
             	ans+=n+'0';
             	n=0;
             }
	}	
	if(n!=0){
		ans+=n+'0';
	};
	int val=0;
	for(int i=ans.length()-1;i>=0;i--){
		val=val*10+(ans[i]-'0');
	}
	cout<<val<<endl;
	return 0;   
}