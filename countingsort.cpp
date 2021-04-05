#include<bits/stdc++.h>
#define ll      long long
using namespace std;
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    int arr[num];
    int max=0;
    for(int i=0;i<num;i++){
        cin>>arr[i];
        if(max<arr[i]){
                 max=arr[i];
        }
    }
    int res[max+1]={0};
    for(int i=0;i<num;i++){
       res[arr[i]]++;
    }
    int i=0,j=0;
    while(j<num){
    	if(res[i]>0){
        
        arr[j++]=i;
        res[i]--;
    	}else{
    		i++;
    	}
    	
    }
    for(int i=0;i<num;i++){
   cout<<arr[i]<<" ";
    }
    return 0;
}