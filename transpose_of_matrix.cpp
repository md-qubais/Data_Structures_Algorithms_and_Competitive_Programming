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
	int c=1;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			arr[i][j]=c++;
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(i<j){
				swap(arr[i][j],arr[j][i]);
			}
		}
	}
   //swap(rows,cols);
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
			}
			cout<<endl;
	}
	return 0;   
}