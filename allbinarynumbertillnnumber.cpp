#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
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
    int n=(1<<num)-1;
    for(int i=0;i<num;i++){
    cout<<0<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
     int mask=i;
     int count=0;
     while(mask>0){
     	if(mask&1){
            cout<<1<<" ";
            count++;
     	}else{
     		count++;
     		cout<<0<<" ";
     	}
      mask=mask>>1;
      
     }
     if(count!=num){
         for(int i=count;i<num;i++){
              cout<<0<<" ";
         } 
     }
     cout<<endl;
    }
    return 0;     
}