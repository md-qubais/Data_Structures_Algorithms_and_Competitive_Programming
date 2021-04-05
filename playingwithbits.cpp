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
     int n;
     cin>>n;
     while(n>0){
         n--;
         int a,b;
         cin>>a>>b;
         int count=0;
          for(int i=a;i<=b;i++){
                int num=i;
                while(num>0){
                         if(num&1){
                           count++;
                         }
                         num=num>>1;
                }
          }
          cout<<count<<endl;
     }
    return 0; 
    
}