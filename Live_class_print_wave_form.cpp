#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	int arr[rows][cols];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
		}
	}
	
		for(int j=0;j<cols;j++){
			if(j%2==0){
				//print top to down
				for(int k=0;k<rows;k++){
					cout<<arr[k][j]<<", ";
				}
			}else{
				//print bottom to up
				for(int k=rows-1;k>=0;k--){
					cout<<arr[k][j]<<", ";
				}
			}
		}
		cout<<"END";
	return 0;   
}