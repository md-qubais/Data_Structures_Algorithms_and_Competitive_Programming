#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
int Brute_force_InversionCount(int *arr,int num){
int res=0;
for(int i=0;i<num-1;i++){
for(int j=i+1;j<num;j++){
if(arr[i]>arr[j]){
cout<<arr[i]<<" "<<arr[j]<<endl;
res++;
}
}
}
return res;
}
int merge(int *arr,int s,int e){

	int res=0;
    int temp[100];
    int mid=(s+e)/2;
    int i=s,j=mid+1,k=s;
    while(i<=mid&&j<=e){
       
       if(arr[i]>arr[j]){
          res+=mid-i+1;
        
          temp[k++]=arr[j++];
       }
       else{
        
           temp[k++]=arr[i++];
       }
    }
    while(i<=mid){
     temp[k++]=arr[i++];
    }
    while(j<=e){
     temp[k++]=arr[j++];
    }
    for(int i=s;i<=e;i++){
            arr[i]=temp[i];
    }

	return res;
}
int inversion_count(int *arr,int s,int e){
if(s>=e){
return 0;
}
int mid=(s+e)/2;
int x=inversion_count(arr,s,mid);
int y=inversion_count(arr,mid+1,e);
int z=merge(arr,s,e);
return x+y+z;
}



int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
    	cin>>arr[i];
    }
    cout<<inversion_count(arr,0,num-1)<<endl;
    return 0;     
}