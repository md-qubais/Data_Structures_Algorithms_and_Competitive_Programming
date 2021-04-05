#include<iostream>
using namespace std;



void Knights(int arr[][1000], int row, int col, int pos,int n){
    
    if(row < 0 || col < 0 || row >= n || col >= n || arr[row][col] != 0) {
        return ;
    }
    
    if(pos == n * n){
        arr[row][col] = pos;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        arr[row][col] = 0;
        return ;
    }
    
    
    arr[row][col] = pos;
    Knights(arr, row - 2, col + 1, pos + 1, n);
    Knights(arr, row - 1, col + 2, pos + 1, n);
    Knights(arr, row + 1, col + 2, pos + 1, n);
    Knights(arr, row + 2, col + 1, pos + 1, n);
    Knights(arr, row + 2, col - 1, pos + 1, n);
    Knights(arr, row + 1, col - 2, pos + 1, n);
    Knights(arr, row - 1, col - 2, pos + 1, n);
    Knights(arr, row - 2, col - 1, pos + 1, n);
    arr[row][col] = 0;
    return;
}

int main(){
    int n , row , col;
    cin>>n>>row>>col;
    int arr[1000][1000]={0};
    Knights(arr, row, col, 1, n);
return 0;
}