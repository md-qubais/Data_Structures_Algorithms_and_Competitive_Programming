#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

void print_spiral(int arr[][100],int rows,int cols){
	int sc=0,sr=0,ec=cols-1,er=rows-1;
	while(sc<=ec and sr<=er){
		//print down;
		for(int i=sr;i<=er;i++){
			cout<<arr[i][sc]<<", ";
		}
		sc++;
		for(int i=sc;i<=ec;i++){
			cout<<arr[er][i]<<", ";
		}
		er--;
		for(int i=er;i>=sr;i--){
			cout<<arr[i][ec]<<", ";
		}
		ec--;
		for(int i=ec;i>=sc;i--){
			cout<<arr[sr][i]<<", ";
		}
		sr++;
	}
	cout<<"END"<<endl;

}


int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	int arr[100][100];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
		}
	}
	print_spiral(arr,rows,cols);
	return 0;   
}