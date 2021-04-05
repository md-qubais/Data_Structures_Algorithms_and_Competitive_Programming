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
    int arr[num];
    int res=0;
    for(int i=0;i<num;i++){
    cin>>arr[i];
    res=res^arr[i];
    }
    int temp=res;
    int pos=0;
    while((temp&1)!=1){
    pos++;
    temp=temp>>1;
    }
    int res1=0;
    int mask=(1<<pos);
    for(int i=0;i<num;i++){
           if((mask&arr[i])>0){
            res1=res1^arr[i];  
           }
    }
    cout<<(res1^res)-1;
    return 0;     
}