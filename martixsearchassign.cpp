#include<bits/stdc++.h>
using namespace std;
int matrixsearch(int **arr,int rows,int cols,int key){
int i=0,j=cols-1;
while(i<rows&&i>=0&&j<cols&&j>=0){
 if(arr[i][j]==key){
return 1;
 }
 else if(arr[i][j]>key){
 j--;
 }else{
 	i++;
 }
}

return 0;
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
    int **arr=new int*[rows];
    for(int i=0;i<rows;i++){
    arr[i]=new int[cols];
   }
   for(int i=0;i<rows;i++){
   	for(int j=0;j<cols;j++){
   cin>>arr[i][j];
   	}
   }
   int key;
   cin>>key;
   cout<<matrixsearch(arr,rows,cols,key)<<endl;

     return 0;
}