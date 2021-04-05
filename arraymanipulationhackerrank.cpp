#include<bits/stdc++.h>
using namespace std;
long arrayManipulation(int n, vector<vector<int>> queries) {
long max=LONG_MIN;
int arr[n+1]={0};
for(int i=0;i<queries.size();i++){
	int num1=queries[i][0];
	int num2=queries[i][1];
	for(int j=num1;j<=num2;j++){
      arr[j]+=queries[i][2];
  	}
}
for(int i=1;i<=n;i++){
if(arr[i]>max){
max=arr[i];
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
    int rows,cols;
    cin>>rows>>cols;
    vector<vector<int>> arr;
    for(int i=0;i<cols;i++){
    	vector<int> a;
    	for(int j=0;j<cols;j++){
         int num;
         cin>>num;
         a.push_back(num);
    	}
    	arr.push_back(a);
    }
 
  cout<<arrayManipulation(rows,arr);
    return 0;
}