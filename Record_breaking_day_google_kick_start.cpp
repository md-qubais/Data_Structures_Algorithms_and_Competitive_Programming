#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
const int n=1000000;
int record_breaking_day(int *arr,int num){
bitset<n> pre;
int res=0;
int max=arr[0];
pre[0]=1;
for(int i=1;i<num;i++){
if(arr[i]>max){
pre[i]=1;
max=arr[i];
}
}
for(int i=0;i<num-1;i++){
if(pre[i]==1 and arr[i]>arr[i+1]){
res++;
}
}
if(pre[num-1]==1){
res++;
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
    cout<<"Case #"<<c<<": "<<record_breaking_day(arr,num)<<endl;
	}
	return 0;     
}