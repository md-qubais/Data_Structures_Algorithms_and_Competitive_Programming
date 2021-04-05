#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef qubais_judge	
	freopen("output.txt","w",stdout);
	freopen("input.txt","r",stdin);
	#endif
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
    int right[num];
    right[num-1]=arr[num-1];
    int left[num];
    left[0]=arr[0];

    for(int i=num-2, j=num-2;i>=0;i--,j--){
    right[i]=right[i+1]+arr[j];
    }
    for(int i=1;i<num;i++){
    left[i]=left[i-1]+arr[i];
    }
    int max=0;
    for(int i=num-1;i>=0;i--){
    if(i==0){
     if(right[i]>max){
     max=right[i];
     }
    }else{
    	for(int j=0;j<i;j++){
    		       int k=left[j]+right[i];
                   if(k>max){
                       max=k;
                  }
    }
    }
 

}
    cout<<max<<endl;
    	
}
    return 0;
}