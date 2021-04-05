#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;

int greater_and_smaller(int *arr,int n){
int res=-1;
int leftsmaller[n];
int rightgreater[n];
leftsmaller[0]=arr[0];
rightgreater[n-1]=arr[n-1];
for(int i=1;i<n;i++){
if(arr[i]>leftsmaller[i-1]){
leftsmaller[i]=arr[i];
}else leftsmaller[i]=leftsmaller[i-1];
}
for(int i=n-2;i>=0;i--){
if(arr[i]<rightgreater[i+1]){
rightgreater[i]=arr[i];
}else rightgreater[i]=rightgreater[i+1];
}
for(int i=1;i<n-1;i++){
if(arr[i]>=leftsmaller[i-1] and arr[i]<=rightgreater[i+1]){
res=arr[i];
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
	while(n>0){
    n--;
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
    cin>>arr[i];
    }
    cout<<greater_and_smaller(arr,num)<<endl;
	}
	return 0;     
}