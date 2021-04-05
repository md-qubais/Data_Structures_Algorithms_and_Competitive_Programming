#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
       for(int s=i;s<num-1;s++){
         cout<<" ";
       }
       if(i==0 or i==num-1){
         for(int j=0;j<num;j++){
         cout<<"*";
         }
       }else{
       	cout<<"*";
       	for(int k=1;k<num-1;k++){
                cout<<" ";
       	}
       	cout<<"*";
       }
       cout<<endl;
	}
	return 0;     
}