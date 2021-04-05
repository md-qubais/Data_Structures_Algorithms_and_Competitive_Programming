#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int largest_length(int *arr,int n){
	int pre=0;
	//first int is for csum
	//second int is for its index
	unordered_map<int,int> m;
	int res=0;
	for(int i=0;i<n;i++){
     pre+=arr[i];
     if(pre==0){
     	res=i+1;
     }else if(m.find(pre)!=m.end()){
          int idx=m[pre];
          int len=i-idx;
          if(len>res){
          	res=len;
          }

     }else{
     	m[pre]=i;
     }
	}
	return res;
}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	cout<<largest_length(arr,num)<<endl;
	return 0;     
}