#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int get_max(int *arr,int num){
	int curr_max=1;
	int res=0;
	int diff=arr[0]-arr[1];
    //here below is the corner case if the
    //array only contains 2 elements
    //this was the most important case for the subimission
    //for the problem
	res=max(res,curr_max);
	for(int i=1;i<num-1;i++){
          if(diff!=arr[i]-arr[i+1]){
          	curr_max=1;
          	diff=arr[i]-arr[i+1];
          }else{
              curr_max++;
          }
          res=max(res,curr_max);
	}
	return res+1;

}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	int i=0;
	while(t--){
		i++;
		int num;
		cin>>num;
		int arr[num];
		for(int i=0;i<num;i++){
			cin>>arr[i];
		}
		cout<<"Case #"<<i<<":"<<" "<<get_max(arr,num)<<endl;
		

	}
	return 0;     
}