#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	while(1){
		int n;
		cin>>n;
		int load=0,max_load=0;
		if(n==-1){
			break;
		}
		int arr[n];
		for(int i=0;i<n;i++){
                 cin>>arr[i];
                 load+=arr[i];
		}
          if(load%n!=0){
          cout<<-1<<endl;
          continue;
          }
          //should be divided
          //to get the each element in an array
          load=load/n;
          int diff=0;
          for(int i=0;i<n;i++){
                    diff+=arr[i]-load;
                    int ans=max(diff,-diff);
                    max_load=max(max_load,ans);
          }
          cout<<max_load<<endl;
	}
	return 0;     
}