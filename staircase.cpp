#include<bits/stdc++.h>
using namespace std;
void stair_case_search(int arr[][100],int rows,int cols,int key){
int i=0,j=cols-1;
bool success=false;
while(j>=0&&i<=rows-1){
  cout<<arr[i][j]<<endl;
if(key>arr[i][j]){
i++;
}
else if(key<arr[i][j]){
j--;
}
else if(arr[i][j]==key){
cout<<"Key found :"<<arr[i][j]<<endl;
success=true;
break;
}

}
if(success==false){
cout<<"Not found"<<endl;
}
}


int main(){
   	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef qubais_judge
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int rows;
    int key;
    cin>>rows>>key;
    int cols=rows;
    int arr[100][100];
    for(int i=0;i<rows;i++){
    	for(int j=0;j<cols;j++){
   cin>>arr[i][j];
    	}
    }

    stair_case_search(arr,rows,cols,key);
return 0;
}