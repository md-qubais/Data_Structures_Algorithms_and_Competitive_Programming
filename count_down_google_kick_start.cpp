#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   


int count_down(int *arr,int num,int k){
int res=0;
for(int i=0;i<num;i++){
if(arr[i]==k){
int x=k;
for(int j=i;j<i+k;j++){
if(x==0){
break;
}
if(arr[j]==x){
x--;
}else{
	break;
}
}
if(x==0){
res++;
}
}
}
return res;
}


int count_down_2(int *arr,int num,int k){
int res=0;
int kth=k;
for(int i=0;i<num;i++){
if(arr[i]==kth){
kth--;
}else{
	kth=k;
}
if(kth==0){
res++;
kth=k;
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
	int c=0;
	cin>>n;
	while(n>0){
    n--;
    c++;
    int num,k;
    cin>>num>>k;
    int arr[num];
    for(int i=0;i<num;i++){
    cin>>arr[i];
    }
    cout<<"Case #"<<c<<": "<<count_down_2(arr,num,k)<<endl;
	}
	return 0;     
}