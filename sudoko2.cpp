#include<bits/stdc++.h>
using namespace std;
bool isSafe(int arr[][9], int i, int j, int k, int n){
  for(int a=0; a<n; a++){
    if(arr[i][a]==k || arr[a][j]==k)  //change
      return false;
  }

  int key = sqrt(n);
  int p = (i/key)*key;
  int q = (j/key)*key;
  for(int a=p; a<p+key; a++){
    for(int b=q; b<q+key; b++){
      if(arr[a][b] == k)
	return false;
    }
  }
  return true;
}

bool solveSudoku(int arr[][9], int i, int j, int n){
  if(i==n){

    for(int a=0; a<n; a++){
      for(int b=0; b<n; b++){
	cout<<arr[a][b]<<" ";
      }
      cout<<endl;
    }
    return true;
  }
  
  if(j==n){
    return solveSudoku(arr,i+1,0,n);
  }

  if(arr[i][j]!=0)
    return solveSudoku(arr,i,j+1,n);

  
    for(int k=1; k<=n; k++){
      if(isSafe(arr,i,j,k,n))
      {
          arr[i][j] = k;
      
      if(solveSudoku(arr,i,j+1,n))
	        return true;
    }
    }
    arr[i][j] = 0;
    return false;
}


int main(){
  #ifndef qubais_judge
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int arr[9][9] = {0};
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin>>arr[i][j];
    }
  }
  solveSudoku(arr,0,0,n);
  return 0;
}
