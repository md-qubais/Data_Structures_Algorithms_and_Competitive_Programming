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

      int left[num];
      int right[num];
      left[0]=1;
      right[num-1]=1;
      
      for(int i=1;i<num;i++){
       if(arr[i]>arr[i-1]){
             left[i]=1+left[i-1];
              
       }else{
       	left[i]=1;
       }
      }
    
    for(int i=num-2;i>=0;i--){
       if(arr[i]>arr[i+1]){
             right[i]=1+right[i+1];
       }else{
       	right[i]=1;
       }
    }
    int max=0;
    for(int i=0;i<num;i++){
    int a=left[i]+right[i]-1;
    if(a>max){
          max=a;
    }
    }
cout<<max<<endl;


}
    return 0;
}