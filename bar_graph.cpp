#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int ans=0;
void printSubArrays(vector<int> arr, int start, int end,int s,int t) 
{       
    // Stop if we have reached the end of the array      
    if (end == arr.size())  
        return; 
        
    // Increment the end point and start from 0  
    else if (start > end)  
        printSubArrays(arr, 0, end + 1,s,t); 
            
    // Print the subarray and increment the starting point  
    else
    { 
    	int m=INT_MIN;
        for (int i = start; i <= end; i++){ 
            m=max(m,arr[i]); 
        } 
        if(s<=m and m<=t)
          {
          	ans++;
          }
       
        printSubArrays(arr, start + 1, end,s,t); 
    } 
      
    return; 
} 

int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int s,t;
	cin>>s>>t;
	printSubArrays(arr,0,0,s,t);
	cout<<ans<<endl;
    return 0;
}