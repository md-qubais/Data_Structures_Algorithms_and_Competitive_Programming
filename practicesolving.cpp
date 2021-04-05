#include<bits/stdc++.h>
using namespace std;   
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int l=0,h=(sizeof(arr)/sizeof(arr[0]))-1;
    int key=1;
    int mid;
    while(l<=h){
    mid=(l+h)/2;
    if(arr[mid]==key){
   cout<<"found"<<endl;
   break;
    }else if(arr[mid]>key){
          h=mid-1;
    }else{
    	l=mid+1;
    }

    }   
    return 0; 
    
}