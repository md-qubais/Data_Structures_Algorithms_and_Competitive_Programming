#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
bool subetsums(int *in,int *out,int i,int j,int n){
if(i==n){
int sum=0;
bool b=false;
for(int i1=0;i1<j;i1++){
sum=sum+out[i1];
b=true;
}
if(sum==0 and b==true){
return true;
}
return false;
}
out[j]=in[i];
bool b1=subetsums(in,out,i+1,j+1,n);
bool b2=subetsums(in,out,i+1,j,n);
if(b1 or b2){
return true;
}
return false;
}



bool subetsums_using_bitmasking(int *arr,int n){
int num=(1<<n)-1;
for(int i=1;i<=num;i++){
int mask=i;
int j=0;
if(__builtin_popcount(mask)==2){
int sum=0;
bool b=false;
while(mask>0){
if(mask&1){
sum=sum+arr[j];
b=true;
}
mask=mask>>1;
j++;
}
if(sum==0 and b==true){
return true;
}
}
}
return false;
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
	while(n>0){
    n--;
    int num;
    cin>>num;
    int arr[num];
    int out[num];
    for(int i=0;i<num;i++){
    cin>>arr[i];
    }
    //bool b=subetsums(arr,out,0,0,num);
	bool b=subetsums_using_bitmasking(arr,num);
	if(b==true){
    cout<<"true";
	}else{
		cout<<"false";
	}
	cout<<endl;
	}
	return 0;     
}