#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	int num;
	cin>>num;
	int arr[num][num];
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			cin>>arr[i][j];
		}
	}
	int rows=num;
	int col1=0;
	int col2=num-1;
	while(col1<col2){
		for(int i=0;i<rows;i++){
			swap(arr[i][col1],arr[i][col2]);
		}
		col1++;
		col2--;
	}
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if(i>j){
				swap(arr[i][j],arr[j][i]);
			}
		}
	}

	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;   
}