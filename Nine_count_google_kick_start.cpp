#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
bool getnine(int num){
while(num>0){
if(num%10==9){
return false;
}
num=num/10;
}

return true;
}



int count_nine(){
int num1,num2;
cin>>num1>>num2;
int res=0;
for(int i=num1;i<=num2;i++){
if((getnine(i)) and i%9!=0){
res++;
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
    for(int i=1;i<=n;i++){
  cout<<"Case #"<<i<<": "<<count_nine()<<endl;
	}
	return 0;     
}