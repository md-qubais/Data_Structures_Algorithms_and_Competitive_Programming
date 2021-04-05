#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void rotate(char *ch,int n){
char c;
for(int i=1;i<=n;i++){
	 c=ch[strlen(ch)-1];
	for(int j=strlen(ch)-1;j>=1;j--){
		ch[j]=ch[j-1];
	}
	ch[0]=c;
}
}


void rotate_optimized(char *ch,int n){
int i=strlen(ch)-1;
int alen=strlen(ch);
int j;
for( j=i;j>=0;j--){
	ch[j+n]=ch[j];
}
j=i+n;
i=n-1;
while(i>=0){
	ch[i--]=ch[j--];
}
ch[j+1]='\0';//here we can also write ch[alen]='\0'
}



int32_t main(){
	qubais_judge;
	IOS;
	char ch[100];
	int n;
	cin>>ch>>n;
	//rotate(ch,n);
	rotate_optimized(ch,n);
	cout<<ch<<endl;
	return 0;   
}