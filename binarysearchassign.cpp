#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
int binarysearch(int *arr,int n,int key){
int s=0;
int h=n-1;
while(s<=h){
int mid=(s+h)/2;
if(arr[mid]==key){
return mid;
}
else if(arr[mid]>key){
h=mid-1;
}else{
	s=mid+1;
}
}
return -1;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarysearch(arr,n,key)<<endl;
    return 0;
}