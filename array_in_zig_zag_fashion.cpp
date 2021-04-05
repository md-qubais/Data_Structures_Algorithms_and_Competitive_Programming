#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;


void zig_zag(int *arr,int num){
for(int i=0;i<num;i=i+2){


if(i>0  and arr[i]>arr[i-1]){
swap(arr[i],arr[i-1]);
}
if(i<num-1 and arr[i]>arr[i+1]){
swap(arr[i],arr[i+1]);
}

}
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
      zig_zag(arr,num);
     for(int i=0;i<num;i++){
    cout<<arr[i]<<" ";
     }
     cout<<endl;
	}
	return 0;     
}