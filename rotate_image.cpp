  #include<bits/stdc++.h>
using namespace std;

void rotate_image(int arr[][100],int rows,int cols){

for(int i=0;i<rows;i++){
int k=0,l=cols-1;
while(k<l){
int temp=arr[i][k];
arr[i][k]=arr[i][l];
arr[i][l]=temp;
k++;
l--;
}
}
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
if(i<j){
swap(arr[i][j],arr[j][i]);
}
}
}


for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
}


void rotate_stl(int arr[][100],int rows,int cols){
for(int i=0;i<rows;i++){
reverse(arr[i],arr[i]+cols);
}



for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
if(i<j){
swap(arr[i][j],arr[j][i]);
}
}
}


for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
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
    cin>>rows;
    cols=rows;
    
    int arr[100][100];
    for(int i=0;i<rows;i++){
          for(int j=0;j<cols;j++){
                  cin>>arr[i][j];
          }
    }
    //rotate_image(arr,rows,cols);
    cout<<"using stl reverse"<<endl;
    rotate_stl(arr,rows,cols);
	return 0;

}