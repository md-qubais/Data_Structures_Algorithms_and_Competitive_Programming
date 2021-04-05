#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
bool check_zero_subarray(int *arr,int n){
	unordered_set<int> m;
	int pre=0;
	for(int i=0;i<n;i++){
		pre+=arr[i];
		if(pre==0 or m.find(pre)!=m.end()){
				return true;
		}
        m.insert(pre);
	}
	return false;

}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int arr[]={1,2,3,-1,-2,-3};
	int n=6;
	if(check_zero_subarray(arr,n)){
     cout<<"Yes the subarray contains zero"<<endl;
	}else{
		cout<<"No the subarray does not contains zero"<<endl;
	}
	return 0;     
}