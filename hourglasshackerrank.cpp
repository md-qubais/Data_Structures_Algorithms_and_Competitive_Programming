#include<bits/stdc++.h>
using namespace std;
int hourglassSum(vector<vector<int>> arr) {
int max=INT_MIN;
for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
 int sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];     
	if(sum>max){
  max=sum;
	}
	}
}
return max;
}
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>>arr;
    for(int i=0;i<6;i++){
    	vector<int> a;
    	for(int j=0;j<6;j++){
    	  int v;
    	  cin>>v;
    	  a.push_back(v);
    	 	}
    	 	arr.push_back(a);
    }    
    cout<<hourglassSum(arr);
    return 0;
}
