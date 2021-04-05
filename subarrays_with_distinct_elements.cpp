#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int get_ans(int *arr,int num){
	int res=0;
	if(num-1==0){
		return 1;
	}
	int j=0;
	unordered_map<int,int> m;
	for(int i=0;i<num;i++){
		while(j<num and m.count(arr[j])==0){
             m[arr[j++]]++;
		}
		//here we have to dexrement the j value by 1
		//because we have to process till that not after that
		j=j-1;
        res=max(res,((j-i+1)*(j-i+2))/2);
    	//erasing the element that we have processed
		m.erase(arr[i]);
         j++;
         //now here we cant increase the value of j
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
	cout<<get_ans(arr,num)<<endl;
	return 0;     
}