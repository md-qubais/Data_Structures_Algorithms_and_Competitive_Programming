#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void spiral_print(int arr[][1000],int rows,int cols){
	int sr=0,sc=0,er=rows-1,ec=cols-1;
	while(sc<=ec and  sr<=er){
		for(int i=sc;i<=ec;i++){
			cout<<arr[sr][i]<<", ";
		}
	
		sr++;

		for(int i=sr;i<=er;i++){
			cout<<arr[i][ec]<<", ";
		}
		ec--;
	
	  if(sr<=er){
		for(int i=ec;i>=sc;i--){
			cout<<arr[er][i]<<", ";
		}
	}
		er--;
	
		if(sc<=ec){
		for(int i=er;i>=sr;i--){
			cout<<arr[i][sc]<<", ";
		}
	}
		sc++;
	
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
	spiral_print(arr,rows,cols);
	return 0;   
}