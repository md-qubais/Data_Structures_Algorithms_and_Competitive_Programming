#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int    int
#define endl  "\n"
using namespace std;
void move_all_x(char *ch,int i,int j){
if(ch[j]=='\0'){

return ;
}
if(ch[i]=='x'){
	j=i;
	while(ch[j]=='x' and ch[j]!='\0'){
		j++;
	}
	if(ch[j]!='\0') 	swap(ch[i],ch[j]);
	move_all_x(ch,i+1,j);
}
else move_all_x(ch,i+1,j);
}

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	char ch[100];
	cin>>ch;
	move_all_x(ch,0,0);
	cout<<ch<<endl;
	return 0;     
}