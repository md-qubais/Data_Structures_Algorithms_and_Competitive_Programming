#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string convert(int i){
	string ans="";
	while(i>0){
		int num=i%10;
		i=i/10;
		ans+=num+'0';
	}
	reverse(ans.begin(),ans.end());
	return ans;
}

void print(string str[],int n,int i){
if(i==n){
return;
}
cout<<str[i]<<" ";
print(str,n,i+1);
}

int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	string str[n+1];
	for(int i=0;i<=n;i++){
		string ans=convert(i);
	    if(i==0){
	    	ans+='0';
	    }
		str[i]=ans;
	}
	sort(str,str+(n+1));
	print(str,n+1,0);
	cout<<endl;
	return 0;   
}