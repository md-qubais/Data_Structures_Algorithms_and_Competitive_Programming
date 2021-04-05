#include<bits/stdc++.h>
#define ll      long long
using namespace std;
int reclinear(int *arr,int n,int i,int key){
if(n==i){
return -1;
}
if(arr[i]==key){
return i;
}
return reclinear(arr,n,i+1,key);
}   
int firstocur(int *arr,int n,int key){
if(n==0){
return -1;
}
if(arr[0]==key){
return 0;
}
int i=firstocur(arr+1,n-1,key);
if(i==-1){
return -1;
}
return i+1;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={1,2,3,4,5,6,7,8,7,8,7,8};
    int n=sizeof(arr)/sizeof(int);
    int key=7;
    cout<<reclinear(arr,n,0,key)<<endl;
    return 0;     
}