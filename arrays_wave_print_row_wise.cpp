#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void wave_print(int arr[][1000],int rows,int cols){
	for(int i=0;i<rows;i++){
		if(i%2==0){
			//front to back
			for(int j=0;j<cols;j++){
				cout<<arr[i][j]<<", ";
			}
		}else{
			//back to front
			for(int j=cols-1;j>=0;j--){
				cout<<arr[i][j]<<", ";
			}
		}
	}
	cout<<"END";
	cout<<endl;
}

int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	int arr[rows][1000];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
		}
	}	
	wave_print(arr,rows,cols);
	return 0;   
}