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
    int sum=0;
    for(int i=0;i<rows;i++){
    	for(int j=0;j<cols;j++){
    cin>>arr[i][j];
    	}
    }
    cout<<"The sum of all submatrix is:";
    for(int i=0;i<rows;i++){
    	 for(int j=0;j<cols;j++){
    	int	n=(i+1)*(j+1);
    	int	m=(rows-i)*(cols-j);
           sum=sum+arr[i][j]*n*m;
    	}
    }
   cout<<sum<<endl;

   return 0;
}
