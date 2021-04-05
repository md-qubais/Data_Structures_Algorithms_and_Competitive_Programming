#include<bits/stdc++.h>
using namespace std;
long maximumSum(vector<long> a, long m) {
   vector<long> pre;
    long max=0;
    pre.push_back(a[0]);
    vector<long> mod;
    mod.push_back(0);
    mod.push_back(pre[0]%m);
    for(int i=1;i<a.size();i++){
    pre.push_back(pre[i-1]+a[i]);
    mod.push_back(pre[i]%m);
    }    

    for(int i=0;i<mod.size();i++){
    cout<<mod[i]<<" ";
    }
    cout<<endl;

return max;


}
int main(){
	#ifndef qubais_judge	
	freopen("output.txt","w",stdout);
	freopen("input.txt","r",stdin);
	#endif
	int n;
	cin>>n;
	while(n>0){
    n--;
    long num,key;
    cin>>num>>key;
     vector<long> arr;
    for(int i=0;i<num;i++){
     long k;
     cin>>k;
     arr.push_back(k);
    }
 long max=0;   
   int pre[num];
   
   // pre[0]=arr[0];
    
   /* for(int i=1;i<num;i++){
    pre[i]=pre[i-1]+arr[i];
    }     
    for(int i=0;i<num;i++){
    	for(int j=i;j<num;j++){
          if(i==0){
           if(pre[j]%key>max){
           max=pre[j]%key;
           }
          }else{
          if((pre[j]-pre[i-1])%key>max){
            max=(pre[j]-pre[i-1])%key;
          }
          }

    	}
    
    }*/
   
  max=maximumSum(arr,key);
    cout<<max<<endl;
  	}

    return 0;
}