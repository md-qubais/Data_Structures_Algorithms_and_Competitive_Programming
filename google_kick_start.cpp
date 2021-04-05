#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


int get_num(string str){
	string kick="KICK";
	string start="START";
	unordered_map<int,char> k1,s1;
	for(int i=0;i<kick.length();i++){
		k1[i]=kick[i];
	}
	for(int i=0;i<start.length();i++){
		s1[i]=start[i];
	}
	string ans="";
	int a=0;
	int k=0;
	int i1=0;
	for(int i=0;i<str.length();i++){
	     ans+=str[i];
	     if(ans[0]=='K' and ans[i1]==k1[i1]){
             i1++;
	     }else if(ans[0]=='S' and ans[i1]==s1[i1]){
	     	i1++;
	     }
	     else{
	     	i1=0;
	     	ans="";
	     }
		if(ans==kick){
			ans="";
			i1=0;
			k++;
			continue;
		}
		if(ans==start){
			ans="";
			i1=0;
			a+=k;
			continue;
		}
	}
return a;
}

int32_t main(){
	qubais_judge;
	IOS;
	char ch;
	int n;
	cin>>n;
	cin>>ch;
	int i=0;
	while(n--){
		i++;
		string str;
		fflush(stdin);
		getline(cin,str);
		cout<<"Case #"<<i<<": "<<get_num(str)<<endl;
	}
	
	return 0;   
}