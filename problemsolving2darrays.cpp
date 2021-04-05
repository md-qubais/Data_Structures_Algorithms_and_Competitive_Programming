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
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
    cin>>arr[i][j];
    }
    }
    int pre[rows][cols];
    for(int i=0;i<rows;i++){
       pre[i][0]=arr[i][0];
          }
    for(int i=0;i<rows;i++){
for(int j=1;j<cols;j++){
 pre[i][j]=pre[i][j-1]+arr[i][j];
 }
          }
for(int i=1;i<rows;i++){
	for(int j=0;j<cols;j++){
  pre[i][j] += pre[i-1][j];
	}
}
for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
cout<<pre[i][j]<<" ";
	}
	cout<<endl;
}
int sum=0;
for(int li=0;li<rows;li++){
	for(int lj=0;lj<cols;lj++){
        for(int bi=li;bi<rows;bi++){
        	for(int bj=li;bj<cols;bj++){
           sum=sum+pre[bi][bi]-pre[li-1][bj]-pre[bi][lj-1]+pre[li-1][lj-1]];      
         	}
        }
	}
}
cout<<sum<<endl;
    return 0;
}