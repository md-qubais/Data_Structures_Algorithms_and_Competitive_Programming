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
	int n,k;
	cin>>n>>k;
    int arr[n];
    //here we are storing the values like val , index
    //to get the index of the current  number
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    	m[arr[i]]=i;
    }
	if(n==k){
		//here it is the corner case
		//if n==k then the answer
		//would be the longest is to reverse the array
		//and print it
		sort(arr,arr+n);
		for(int i=n-1;i>=0;i--){
			cout<<arr[i]<<" ";

		}
	}else{
    //here we are going to code the actual problem
    //now we have to place the elements on its best
		//place means if we wanted the largest
		//permutation then we have to place that number
		//in N-num position to make and place it as
		//the largest number 
         int num=n;
         while(k>0){
           int idex_to_place=n-num;
           int idx=m[num];
           if(idex_to_place==n){
           	break;

           }
           if(idx!=idex_to_place){
           	    swap(arr[idex_to_place],arr[idx]);
           	    m[arr[idex_to_place]]=idex_to_place;
           	    m[arr[idx]]=idx;
                k--;
           }

            num--; 
         }
         for(int i=0;i<n;i++){
         	cout<<arr[i]<<" ";

         }
	}
	return 0;     
}