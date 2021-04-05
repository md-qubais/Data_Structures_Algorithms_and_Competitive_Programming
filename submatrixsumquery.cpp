#include<bits/stdc++.h>
using namespace std;


int getmsum(int arr[][100],int rows,int cols){
	//first update the cols wise
	//and we are updating that current 
	//matrix to presum matrix
	for(int i=rows-1;i>=0;i--){
		for(int j=cols-2;j>=0;j--){
          arr[i][j]=arr[i][j]+arr[i][j+1];
		} 
	}
     for(int i=rows-2;i>=0;i--){
     	for(int j=cols-1;j>=0;j--){
           arr[i][j]=arr[i][j]+arr[i+1][j];
     	}
     }
     int res=INT_MIN;
  for(int i=0;i<rows;i++){
  	for(int j=0;j<cols;j++){
         res=max(res,arr[i][j]);
  	}
  }
	return res;
}




int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int rows;
   int cols;
   cin>>rows>>cols;
   int arr[100][100];
   for(int i=0;i<rows;i++){
   	for(int j=0;j<cols;j++){
     cin>>arr[i][j];
   	}
   }
  int maxsum=getmsum(arr,rows,cols);
   cout<<maxsum<<endl;
   return 0;
}