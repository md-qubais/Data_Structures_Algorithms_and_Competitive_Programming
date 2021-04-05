#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
/*int last_index(string str,int i){

	if(i==-1){
  return -1;
	}
		if(str[i]=='1'){
   return i;
	} 
return last_index(str,i-1);
}*/
int last_index(string str,int i){
int res=-1;
for(;i>=0;i--){
if(str[i]=='1'){
	res=i;
break;
}
}
return res;
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
     string str;
     cin>>str;
     cout<<last_index(str,str.length()-1)<<endl;
	}
	return 0;     
}