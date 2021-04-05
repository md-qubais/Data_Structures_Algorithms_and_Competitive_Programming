#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
void permute(char *ch,int i){
//base case
	if(ch[i]=='\0'){
    cout<<ch<<endl;
    return ;
	}
   for(int j=i;ch[j]!='\0';j++){
      swap(ch[i],ch[j]);
      permute(ch,i+1);
      //this below step is known as backtracking step
      //it means restoring the origrinal array 
      //after the recursive call is tracking back
      //towads up direction
      swap(ch[i],ch[j]);
   }



}
int32_t main() {
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	char ch[100];
	cin>>ch;
	permute(ch,0);
	return 0;
}