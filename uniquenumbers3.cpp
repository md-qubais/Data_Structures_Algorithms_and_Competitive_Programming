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
    int count[64]={0};
    int n;
    cin>>n;
    int pos=0;
    for(int i=0;i<n;i++){
    int no;
    cin>>no;
    int j=0;
    while(no>0){
     count[j]+=(no&1);
     j++;
     if(pos<j){
    pos=j;
     }
     no=no>>1;
    }
             
    }
    for(int i=0;i<pos;i++){
     count[i]%=3;
    }   
    int res=0;
    for(int i=0;i<pos;i++){
       res=res+count[i]*pow(2,i);
    }
    cout<<res<<endl;
    
    return 0;
}