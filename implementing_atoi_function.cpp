#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int implement_atoi(string str){
int ans=0;

for(int i=0;i<str.length();i++){
if(str[i]=='-'){
continue;
}
if((str[i]-'0')>=0 and (str[i]-'0')<=9){
ans=10*ans+(str[i]-'0');
}else{
	return -1;
}

}
if(str[0]=='-'){
	return -ans;
}

return ans;
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
       cout<<implement_atoi(str)<<endl;
	}
	return 0;     
}