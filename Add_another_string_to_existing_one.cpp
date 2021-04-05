#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	char ch1[100];
	char ch2[100];
	cin>>ch1;
	cin>>ch2;
	int n=strlen(ch1);
	ch1[n++]=' ';
	for(int i=0;i<strlen(ch2);i++){
		ch1[n++]=ch2[i];
	}
	ch1[n]='\0';
	//to stop the string printing 
	//else it will print garbage till it
	//get the character null \0;
	cout<<ch1<<endl;
	return 0;   
}