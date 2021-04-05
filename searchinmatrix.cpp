#include<bits/stdc++.h>
using namespace std;

int linearsearch(int **arr,int rows,int cols,int key){
for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
 if(arr[i][j]==key){
return key;
 }
	}
}
return -1;
}

int bsearch(int **arr,int rows,int cols,int key){
for(int i=0;i<rows;i++){
int num=binary_search(arr[i],arr[i]+cols,key);
if(num>0){
return num;
}

}
return -1;
}

int stair_case_search(int **arr,int rows,int cols,int key){
int i=0;
int j=cols-1;
while(i>=0&&i<=rows-1&&j>=0&&j<=cols-1){
 cout<<arr[i][j]<<endl;
 if(arr[i][j]==key){
return key;
 }
 else if(key<arr[i][j]){
j--;
 }else{
 	i++;
 }
	}

return -1;
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
    int key;
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
    cin>>key;
   /* key=linearsearch(arr,rows,cols,key);
    key=bsearch(arr,rows,cols,key);
    key=stair_case_search(arr,rows,cols,key);
    */
    //These above are the three possible searches
    //in rows and cols wise sorted matrix
    if(key==-1){
     cout<<"Key not found"<<endl;
    }else{
    	cout<<"Key is present in the matrix"<<endl;
    }
    return 0;
}