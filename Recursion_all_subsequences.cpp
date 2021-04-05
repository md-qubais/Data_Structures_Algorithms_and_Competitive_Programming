#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void subsequences(string in,string out,int i,string str[],int &k){
	if(in[i]=='\0'){
	//	cout<<out<<endl;
		str[k++]=out;
		return;
	}
	out+=in[i];
	subsequences(in,out,i+1,str,k);
	out.pop_back();
	subsequences(in,out,i+1,str,k);

}



int32_t main(){
	qubais_judge;
	IOS;	
	int t;
	cin>>t;
	while(t--){
		string str;
		string ans="";
		cin>>str;
		string s[100];
		int k=0;
	    subsequences(str,ans,0,s,k);
	    sort(s,s+k);
	    for(int i=0;i<k;i++){
	    	cout<<s[i]<<endl;
	    }

	}

	return 0;   
}