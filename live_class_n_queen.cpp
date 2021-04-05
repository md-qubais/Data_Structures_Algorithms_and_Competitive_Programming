#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool can_we(int arr[][1000],int rows,int cols,int i,int j){
	//check column and row
	for(int k=0;k<rows;k++){
		if(arr[k][j]==1 or arr[i][k]==1){
			return false;
		}
	}
	//now we are checking the diagnals

	//left diagonal up
	int r=i,c=j;
	while(r>=0 and c>=0){
		if(arr[r][c]==1){
			return false;
		}
		r--;
		c--;
	}
	//right diagonal up
	r=i,c=j;
	while(r>=0 and c<cols){
		if(arr[r][c]==1){
			return false;
		}
		r--;
		c++;
	}
	return true;
}



bool solve(int arr[][1000],int rows,int cols,int i){
	if(i==rows){
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	for(int j=0;j<cols;j++){
		bool can_place=can_we(arr,rows,cols,i,j);
		if(can_place){
			arr[i][j]=1;
			if(solve(arr,rows,cols,i+1)){
				return true;
			}
		}
		arr[i][j]=0;
	}

	return false;
}



int32_t main(){
	qubais_judge;
	IOS;	
	int rows,cols;
	cin>>rows>>cols;
	int arr[rows][1000];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			arr[i][j]=0;
		}
	}
	solve(arr,rows,cols,0);
	return 0;   
}