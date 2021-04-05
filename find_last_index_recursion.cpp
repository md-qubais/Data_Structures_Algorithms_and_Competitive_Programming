#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
int find_last_index(vector<int> arr,int key,int index,int n,int i){
if(arr[i]==key){
index=i;
}
if(i==n){
return index;
}

return find_last_index(arr,key,index,n,i+1);
}


int find_last_index_optimized(vector<int> arr,int num,int size,int i){
if(size==arr.size()+1){
return -1;
}
if(arr[i]==num){
return i;
}
return find_last_index_optimized(arr,num,size+1,i-1);
}



int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
   cin>>arr[i];
    }    	
    int num;
    cin>>num;
    cout<<find_last_index_optimized(arr,num,1,n-1);
	return 0;     
}