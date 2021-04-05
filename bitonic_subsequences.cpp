#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
int bitonic(int *arr,int num){
	int left[num],right[num];
	left[0]=1;
	right[num-1]=1;
	for(int i=1;i<num;i++){
            int x=1;
             for(int j=0;j<i;j++){
             	if(arr[i]>arr[j]){
                    x=max(x,left[j]+1);
             	}
             }
             left[i]=x;
 	}
    for(int i=num-2;i>=0;i--){
    	int x=1;
    	for(int j=i+1;j<num;j++){ 
              if(arr[i]>arr[j]){
                       x=max(x,right[j]+1);
              }         
    	}
    	right[i]=x;
    }
int ans=0;
for(int i=0;i<num;i++){
ans=max(ans,right[i]+left[i]-1);
}

return ans;
}


int32_t main() {
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		int arr[num];
		for(int i=0;i<num;i++){
            cin>>arr[i];
		}
		cout<<bitonic(arr,num)<<endl;
	}
	return 0;     
}