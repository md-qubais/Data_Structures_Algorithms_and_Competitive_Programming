#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void rotate(char *ch,int n){
char c;
for(int i=1;i<=n;i++){
	 c=strlen(ch)-1;
	for(int j=strlen(ch)-1;i>=1;i--){
		ch[j-1]=ch[j];
	}
	ch[0]=c;
}
}



int32_t main(){
	qubais_judge;
	IOS;
	char ch[100];
	int n;
	cin>>ch>>n;
	//rotate(ch,n);
	cout<<ch<<endl;
	return 0;   
}