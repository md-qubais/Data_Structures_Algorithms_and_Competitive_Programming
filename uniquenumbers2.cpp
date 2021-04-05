#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
int getbits(int n,int pos){
return (n&(1<<(pos)))>0?1:0;
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
    int res=0;
    for(int i=0;i<num;i++){
    cin>>arr[i];
    res=res^arr[i];
    }
    int pos=0;
    int temp=res;
    while((temp&1)!=1){
     
      temp=temp>>1;
     pos++;
    }
    int res1=0;
    int mask=1<<pos;
    for(int i=0;i<num;i++){
    if((arr[i]&mask)>0){
       res1=res1^arr[i];
    }
    }
     res=res^res1;


    if(res>res1){
   cout<<res1<<" "<<res<<endl;
    }else{
    	cout<<res<<" "<<res1<<endl;
    }
    return 0; 
    
}