#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
char ch[]={'A','B','C','D'};
int aliens_piano(int *arr,int num){
int res=0;
int chars=0;
char chs[num];
chs[0]=ch[chars++];
for(int i=1;i<num;i++){
if(chars>=4){
chars=0;
}
if(arr[i]>arr[i-1]){

chs[i]=ch[chars++];
}else if(arr[i]<arr[i+1]){
chars=0;

	chs[i]=ch[chars++];

}else{
	chs[i]=ch[chars];
}
}
for(int i=0;i<num-1;i++){
if(arr[i]<arr[i+1] and chs[i]>chs[i+1] and chs[i]=='D'){
res++;
}
if(arr[i]>arr[i+1] and chs[i]<chs[i+1] and chs[i]=='A'){
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
	int c=0;
	while(n>0){
       n--;
       c++;
       int num;
       cin>>num;
       int arr[num];
       for(int i=0;i<num;i++){
         cin>>arr[i];
       }
       cout<<"Case #"<<c<<": "<<aliens_piano(arr,num)<<endl;
	}
	return 0;     
}