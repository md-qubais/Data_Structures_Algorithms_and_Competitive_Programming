#include<bits/stdc++.h>
using namespace std;

void submatrix(int **arr,int rows,int cols){
//making the arr matrix as presum matrix
	//by updating its cols first
for(int i=0;i<rows;i++){
	for(int j=1;j<cols;j++){
arr[i][j] += arr[i][j-1];
	}
}
//making the arr matrix as presum matrix
	//by updating its rows second
for(int i=1;i<rows;i++){
	for(int j=0;j<cols;j++){
     arr[i][j]+=arr[i-1][j];
	}
}




int sum=0;
for(int li=0;li<rows;li++){
	for(int lj=0;lj<cols;lj++){
     for(int i=li;i<rows;i++){
     	for(int j=lj;j<cols;j++){
           sum=sum+arr[i][j];
           if(li>0){
        sum=sum-arr[li-1][j];
           }
           if(lj>0){
 sum=sum-arr[i][lj-1];
           }
           if(li>0&&lj>0){
       sum=sum+arr[i-1][j-1];
           }
     	}
     }
	}
}

cout<<sum<<endl;


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
    submatrix(arr,rows,cols);   
    return 0;
}