#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
void subsets_using_bitmasking(char *ch,int size){
int n=(1<<size)-1;
for(int i=1;i<=n;i++){
int mask=i;
int j=0;
while(mask>0){
if(mask&1){
//cout<<ch[j];
}
j++;
mask=mask>>1;
}
//cout<<endl;
}
}

void subsets_using_recursion(char *in,char *out,int i,int j){
if(in[i]=='\0'){
out[j]='\0';
//cout<<out<<endl;
return ;
}
out[j]=in[i];
subsets_using_recursion(in,out,i+1,j+1);
subsets_using_recursion(in,out,i+1,j);
}


int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	char ch[100];
	char out[100];
	cin>>ch;
    int size=strlen(ch);
    time_t start=clock();
    subsets_using_bitmasking(ch,size);
	time_t end=clock();
	cout<<"The time for subsets using bitmasking is:"<<end-start<<endl;
	start=clock();
	subsets_using_recursion(ch,out,0,0);
	end=clock();
	cout<<"The time for subsets using recursion is:"<<end-start<<endl;
	return 0;     
}