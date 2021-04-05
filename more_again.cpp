#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//h right
//v down
//d diagonal
void printpaths(int sr,int sc,int dr,int dc,string ans){
	if(sc<=0 or sr<=0){
		
		return ;
	}
	if(sr==dr and sc==dc){
		cout<<ans<<endl;
		return;
	}
	
	for(int ms=1;ms<=dc-sc;ms++){
		char ch=ms+'0';
		string str="";
		str+=ch;
		str="h"+str;
	   printpaths(sr,sc+ms,dr,dc,ans+str);
		
	}

	for(int ms=1;ms<=dr-sr;ms++){
		char ch=ms+'0';
		string str="";
		str+=ch;
		str="v"+str;
		printpaths(sr+ms,sc,dr,dc,ans+str);
		
	}
	for(int ms=1;ms<=dr-sr and ms<=dc-sc ;ms++){
			char ch=ms+'0';
		string str="";
		str+=ch;
		str="d"+str;
		printpaths(sr+ms,sc+ms,dr,dc,ans+str);
		
	}	
	

}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int m;
	cin>>m;
	printpaths(1,1,n,m,"");
	return 0;   
}