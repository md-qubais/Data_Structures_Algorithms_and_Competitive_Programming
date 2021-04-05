#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void copy(char *a,char *b){
int i=0;
for( i=0;b[i]!='\0';i++){
a[i]=b[i];
}
a[i]='\0';

}


int32_t main(){
	qubais_judge;
	IOS;
	char ch[100];
	int max_len=0;
	char ans[100];
	cin.get(ch,100);
	while(ch[0]!='\0'){
         if(strlen(ch)>max_len){
         	max_len=strlen(ch);
         	copy(ans,ch);
         }
         cin.ignore();
         cin.get(ch,100);
	}
	cout<<ans<<endl;
	return 0;   
}