#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
void replace_pi(char *ch,int i){
if(ch[i]=='\0' or ch[i+1]=='\0'){
return ;
}
if(ch[i]=='p' and ch[i+1]=='i'){
int j=i;
while(ch[j]!='\0'){
j++;
}
int l=j;
for(int k=0;k<2;k++){
l++;
}
while(j>i+1){
ch[l]=ch[j];
j--;
l--;
}
int pos=0;
char a[]="3.14";
for(int k=i;k<=i+3;k++){
ch[k]=a[pos++];
}
}
  replace_pi(ch,i+1);

}
int main() 
{
	  #ifndef qubais_judge
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	  #endif
   	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char ch[100]="xpixxxxpipi";
    replace_pi(ch,0);
    cout<<ch<<endl;
    return 0;     
}