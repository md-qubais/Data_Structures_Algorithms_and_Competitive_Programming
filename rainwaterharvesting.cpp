#include<bits/stdc++.h>
using namespace std;
int main(){
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
    int res=0;

   /* for(int i=1;i<n-1;i++){
        int left=0;
        int right=0;
        for(int j=i-1;j>=0;j--){
         left=max(left,arr[j]);
        }
        for(int j=i+1;j<n;j++){
        right=max(right,arr[j]);
        }
        if(left>arr[i]&&right>arr[i]){
           int num=min(left,right)-arr[i];
           res=res+num;
        }
    }*/
    //previously calculating the left and right highest
    //left array and right array;
    int left[n];
    int right[n];
    left[0]=arr[0];
    right[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
     if(arr[i]>left[i-1]){
     left[i]=arr[i];
     }else{
     	left[i]=left[i-1];
     }
    } 
   for(int i=n-2;i>=0;i--){
   if(arr[i]>right[i+1]){
  right[i]=arr[i];
   }else{
   	right[i]=right[i+1];
   }
   }
   
   for(int i=1;i<n-1;i++){
       

        if(left[i]>arr[i]&&right[i]>arr[i]){
           int num=min(left[i],right[i])-arr[i];
           res=res+num;
        }

}
   cout<<res<<endl;
    return 0;
}
