#include<bits/stdc++.h>
#define ll      long long
using namespace std;




int allstoredoccur(int *arr,int i,int n,int *store,int j,int key){
if(i==n){
return j;
}
if(arr[i]==key){
store[j]=i;
j++;
}
return allstoredoccur(arr,i+1,n,store,j,key);
}





void alloccur(int *arr,int i,int n,int key){
if(i==n){
return;
}
if(arr[i]==key){
cout<<"The key:"<<key<<" is present at index:"<<i<<endl;
}
alloccur(arr,i+1,n,key);
}





int lastoccur(int *arr,int n,int key){
if(n==0){
return -1;
}
int i=lastoccur(arr+1,n-1,key);
if(i==-1){
if(arr[0]==key){
return 0;
}
else return -1;
}
return i+1;
}





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
    int store[n];
    int j=0;
    int key=7;
    j=allstoredoccur(arr,0,n,store,j,key);
    for(int i=0;i<j;i++){
   cout<<store[i]<<endl;
    }
    return 0;     
}