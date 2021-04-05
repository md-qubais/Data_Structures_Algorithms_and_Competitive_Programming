#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int longest_using_set(int *arr,int n){
	int res=0;
	unordered_set<int> s;
	for(int i=0;i<n;i++){
		s.insert(arr[i]);//insertion in o(1) time
	}
	for(int i=0;i<n;i++){
		if(s.find(arr[i]-1)==s.end()){
                   int num=0;
                   int no=arr[i];
                   while(s.find(no)!=s.end()){
                   	num++;
                   	no++;
                   }
                   res=max(res,num);
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
	int arr[]={14,5,1,2,6,3,7,8,9,13,15,11,12,13,4};
	int n=sizeof(arr)/sizeof(int);
	cout<<longest_using_set(arr,n)<<endl;
	return 0;     
}