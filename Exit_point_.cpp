#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
//#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

void go_right(int arr[100][100],int,int ,int ,int);
void go_up(int arr[100][100],int,int ,int ,int);
void go_down(int arr[100][100],int,int ,int ,int);
void go_left(int arr[100][100],int,int ,int ,int);


void go_right(int arr[][100],int rows,int cols,int i,int j){
	while(j<cols){
		if(arr[i][j]==1){
			go_down(arr,rows,cols,i+1,j);
			return;
		}
		j++;
	}
	if(arr[i][cols-1]==0){
		//cout<<"qubias";
		cout<<i<<endl;
		cout<<cols-1<<endl;
		return;
	}

}



void go_up(int arr[][100],int rows,int cols,int i,int j){
	//cout<<"qubais";
	while(i>=0){
		if(arr[i][j]==1){	
			go_right(arr,rows,cols,i,j+1);
			return;
		}
		i--;
	}
	if(arr[0][j]==0){
		cout<<0<<endl;
		cout<<j<<endl;
		return;
	}

}
void go_left(int arr[][100],int rows,int cols,int i,int j){
	while(j>=0){
		if(arr[i][j]==1){
			go_up(arr,rows,cols,i-1,j);
			return;
			
		}
		j--;
	}
	if(arr[i][0]==0){
		cout<<i<<endl;
		cout<<0<<endl;
		return ;
	}
}


void go_down(int arr[][100],int rows,int cols,int i,int j){
	//cout<<i<<" "<<j<<" "<<endl;
	while(i<rows){
		if(arr[i][j]==1){
			go_left(arr,rows,cols,i,j-1);
			return;
		}
		i++;
	}

	if(arr[rows-1][j]==0){
		cout<<rows-1<<endl;
		cout<<j<<endl;
		return ;
	}
}
int main(){
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
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(arr[i][j]==1){
				go_down(arr,rows,cols,i+1,j);
				return 0;
		}
		}
		if(arr[i][cols-1]==0){
		//	cout<<"qubais";
			cout<<i<<endl;
			cout<<cols-1<<endl;
			return 0;
		}
	}

	return 0;   
}