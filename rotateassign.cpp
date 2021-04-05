#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int rows;
    cin>>rows;
    int cols=rows;
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
    	for(int j=0;j<cols;j++){
   cin>>arr[i][j];
    	}
    }
   for(int i=0;i<rows;i++){
   int l=0;
   int k=cols-1;
   while(l<k){
   	int temp=arr[i][l];
   arr[i][l]=arr[i][k];
   arr[i][k]=temp;
   l++,k--;
   }
   }
   for(int i=0;i<rows;i++){
   	for(int j=0;j<cols;j++){
    if(i<j){
     int temp=arr[i][j];
     arr[i][j]=arr[j][i];
     arr[j][i]=temp;
    }
   	}
   }
   for(int i=0;i<rows;i++)
   {
   	for(int j=0;j<cols;j++){
   cout<<arr[i][j]<<" ";
   	}
   	cout<<endl;
   }


    return 0;
}