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
	int i=0;
	int j=cols-1;
	while(i<rows and j>=0){
		if(arr[i][j]==k){
			cout<<1<<endl;
			return 0;
		}else if(arr[i][j]>k){
			j--;
		}else{
			i++;
		}
	}
	cout<<0<<endl;
	return 0;   
}