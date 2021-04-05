#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
void recusrion_string_format(char *ch,int i,int size){
if(ch[i]=='\0'){
cout<<ch<<endl;
return ;
}
if(ch[i]==ch[i-1]){
int j=i;
for(;ch[j];j++)
{

}
while(j>=i){
ch[j+1]=ch[j];
j--;
}
ch[i]='*';
size++;
}
recusrion_string_format(ch,i+1,size);
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
	recusrion_string_format(ch,1,strlen(ch));
	return 0;     
}