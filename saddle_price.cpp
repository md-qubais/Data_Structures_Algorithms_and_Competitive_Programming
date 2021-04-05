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
	int n;
	cin>>n;
	rows=n,cols=n;
	int arr[rows][cols];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<rows;i++){
		//here we are determining the row_min
		int row_min=INT_MAX;
	    int r1,c1;
     	int col_max=INT_MIN;
		for(int j=0;j<cols;j++){
			if(row_min>arr[i][j]){
				row_min=arr[i][j];
				r1=i;
				c1=j;
			}
		}
		//here we are determinging the col_max;
		for(int i1=0;i1<rows;i1++){
			if(col_max<arr[i1][c1]){
				col_max=arr[i1][c1];
			}
		}
		if(col_max==row_min){
			cout<<col_max<<endl;
			return 0;
		}
	}

	cout<<"Invalid input"<<endl;
	return 0;   
}