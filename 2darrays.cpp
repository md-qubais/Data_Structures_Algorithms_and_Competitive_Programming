#include<bits/stdc++.h>
using namespace std;

void spiral_print(int rows,int cols,int arr[][100]){
	//this is known as the spiral print of the matrix
	int sr=0;
	int er=cols;
	int sc=0;
	int ec=rows;
while(sr<ec){
	for(int i=sr;i<er;i++){
     cout<<arr[sr][i]<<" ";
	}
	sr++;
	for(int i=sr;i<er;i++){
    cout<<arr[i][er-1]<<" ";
	}
	er--;
	for(int i=ec-2;i>=sc;i--){
           cout<<arr[ec-1][i]<<" ";
	}
	ec--;
	for(int i=ec-1;i>=sr;i--){
        cout<<arr[i][sc]<<" ";
	}
	sc++;
}
}

int main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
   int rows;
   cin>>rows;
   int cols;
   cin>>cols;
   int arr[100][100];
   for(int i=0;i<rows;i++){
          for(int j=0;j<cols;j++){
     cin>>arr[i][j];
          }
   }
   spiral_print(rows,cols,arr);
  	return 0;
}