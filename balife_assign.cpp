#include<bits/stdc++.h>
#include<cstring>
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
	int num;
	cin>>num;
	int arr[num];
	int load=0;
	for(int i=0;i<num;i++){
       cin>>arr[i];
       load+=arr[i];
	}
	if(load%num!=0){
        cout<<-1<<endl;
        return 0;
	}
	load=load/num;
	int max_load=INT_MIN;
	int diff=0;
	for(int i=0;i<num;i++){
          diff+=(arr[i]-load);
            int ans=max(diff,-diff);
            max_load=max(ans,max_load);
	}
	cout<<max_load<<endl;
	return 0;     
}