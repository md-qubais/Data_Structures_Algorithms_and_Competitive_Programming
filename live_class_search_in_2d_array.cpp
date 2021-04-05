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
	int k;
	cin>>k;
	int r=0,c=0;
	for(r=0;r<rows;r++){
		for(c=0;c<cols;c++){
			if(arr[r][c]==k){
				cout<<"found at:"<<r<<" "<<c<<endl;
				break;
			}
		}
		if(c!=cols){
			break;
		}
	}
	if(r==rows){
		cout<<"the element is not present in the 2d array"<<endl;
	}
	return 0;   
}