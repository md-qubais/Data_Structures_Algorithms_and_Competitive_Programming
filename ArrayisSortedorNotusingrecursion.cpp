#include<bits/stdc++.h>
#define ll      long long
using namespace std;
bool isSorted(int *arr,int n){
if(n==0 or n==1){
return true;
}
if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
return true;
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
    int arr[]={1,2,3,4,5,6,7,6,9};
    int n=sizeof(arr)/sizeof(int);
    if(isSorted(arr,n)){
    cout<<"The array is Sorted"<<endl;
    }else cout<<"The array is not Sorted"<<endl;
    return 0;
}