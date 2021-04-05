#include<bits/stdc++.h>
using namespace std;
bool search(int *arr,int key,int s,int e){
int mid=(s+e)/2;
if(s<=e){
if(arr[mid]==key){
return true;
}else if(arr[mid]>key){
return   search(arr,key,s,mid-1);

}else{
return   search(arr,key,mid+1,e);
}
}
return false;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    int key=11;
    if(search(arr,key,0,n-1)){
    cout<<"The element: "<<key<<" is present in the array"<<endl;
    }else cout<<"The element: "<<key<<" is not present in the array"<<endl;
    return 0;
}