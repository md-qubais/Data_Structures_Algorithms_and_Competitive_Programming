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

    for(int j=0;j<cols;j++){
    if(j%2==0){
    for(int i=0;i<rows;i++){
    cout<<arr[i][j]<<", ";
    }
    }else{
    for(int i=rows-1;i>=0;i--){
    cout<<arr[i][j]<<", ";
    }
    } 
    }
    cout<<"END";


    return 0;
}