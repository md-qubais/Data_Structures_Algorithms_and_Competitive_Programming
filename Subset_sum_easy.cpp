#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
bool subsetsum(int *arr,int *out,int i,int j,int n){
if(i==n){
int sum=0;
bool b=false;
for(int k=0;k<j;k++){
sum=sum+arr[k];
b=true;
}
j=0;
if(sum==0 and b){
cout<<sum<<endl;
return true;
}else{
	return false;
}
}
out[j]=arr[i];
bool b1=subsetsum(arr,out,i+1,j+1,n);
bool b2=subsetsum(arr,out,i+1,j,n);
bool res=false;
if(b1 or b2){
res=true;
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
	int t;
	cin>>t;
	while(t>0){
    t--;
    int num;
    cin>>num;
    int arr[num];
    int out[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<subsetsum(arr,out,0,0,num);
	}
	return 0;     
}