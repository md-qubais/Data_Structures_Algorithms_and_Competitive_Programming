#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
char* copy(char *a,char *b){
int i=0;
for( i=0;b[i]!='\0';i++){
a[i]=b[i];
}
a[i]='\0';
return a;
}


int32_t main(){
	qubais_judge;
	IOS;
	char a[100];
	char b[100];
	cin>>a>>b;
	char *ans=copy(a,b);
	cout<<ans<<endl;
	return 0;   
}