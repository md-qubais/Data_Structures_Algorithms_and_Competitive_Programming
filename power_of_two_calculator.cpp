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
	 time_t start=clock();
     cout<<(1<<num)<<endl;
     int j=1;
     time_t end=clock();
     cout<<"The time for above is:"<<end-start<<endl;
     start=clock();
     for(int i=0;i<num;i++){
          j=j*2;
     }
     cout<<j<<endl;
     end=clock();
     cout<<"The time for above is:"<<end-start<<endl;
	return 0;     
}