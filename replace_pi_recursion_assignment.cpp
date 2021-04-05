#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
void replace_pi(char *ch,int i){
	//base case
	if(ch[i]=='\0'){
    cout<<ch<<endl;
    return ;
	}
   if(ch[i]=='p' and ch[i+1]!='\0' and ch[i+1]=='i'){
    int j=i;
    while(ch[j]!='\0'){
    	j++;
    }
    while(j>=i){
 ch[j+2]=ch[j];
   j--;
    }
    ch[i]='3';
    ch[i+1]='.';
    ch[i+2]='1';
    ch[i+3]='4';
   }
   //recursive case
replace_pi(ch,i+1);
}

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int n;
	cin>>n;
	while(n--){
		char ch[100];
		cin>>ch;
		replace_pi(ch,0);
	}
	return 0;     
}