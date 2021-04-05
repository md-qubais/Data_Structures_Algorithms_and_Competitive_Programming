#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

bool can_place(int arr[][1000],int rows,int cols,int i,int j){
	if(i>=0 and j>=0 and i<rows and j<cols and arr[i][j]==0){	
		return true;
	}	
	return false;
}

bool solve_kinght(int arr[][1000],int rows,int cols,int i,int j,int num){
	    //cout<<num<<endl;
		if((num)==(rows*cols)){
		for(int i=0;i<rows;i++){
			cout<<" ";
			for(int j=0;j<cols;j++){
				cout<<arr[i][j]<<"  ";
			}
			cout<<endl;
		}
		return true;
	}
	//now there are total eight possibility
	//down right
	if(can_place(arr,rows,cols,i+2,j+1)){
		arr[i+2][j+1]=num;
		if(solve_kinght(arr,rows,cols,i+2,j+1,num+1)){
			return true;
		}
		arr[i+2][j+1]=0;
	}
	//down left
	if(can_place(arr,rows,cols,i+1,j+2)){
		arr[i+1][j+2]=num;
		if(solve_kinght(arr,rows,cols,i+1,j+2,num+1)){
			return true;
		}
		arr[i+1][j+2]=0;
	}


if(can_place(arr,rows,cols,i-1,j+2)){
 		arr[i-1][j+2]=num;
		if(solve_kinght(arr,rows,cols,i-1,j+2,num+1)){
			return true;
		}
		arr[i-1][j+2]=0;
	}

if(can_place(arr,rows,cols,i-2,j+1)){
		arr[i-2][j+1]=num;
		if(solve_kinght(arr,rows,cols,i-2,j+1,num+1)){
			return true;
		}
		arr[i-2][j+1]=0;

	}//up left
	

if(can_place(arr,rows,cols,i-2,j-1)){
		arr[i-2][j-1]=num;
		if(solve_kinght(arr,rows,cols,i-2,j-1,num+1)){
			return true;
		}
		arr[i-2][j-1]=0;
	}
	
if(can_place(arr,rows,cols,i-1,j-2)){
		arr[i-1][j-2]=num;
		if(solve_kinght(arr,rows,cols,i-1,j-2,num+1)){
			return true;
		}
		arr[i-1][j-2]=0;
			}
	
if(can_place(arr,rows,cols,i+1,j-2)){
		arr[i+1][j-2]=num;
		if(solve_kinght(arr,rows,cols,i+1,j-2,num+1)){
			return true;
		}
		arr[i+1][j-2]=0;
	}
	if(can_place(arr,rows,cols,i+2,j-1)){
		arr[i+2][j-1]=num;
		if(solve_kinght(arr,rows,cols,i+2,j-1,num+1)){
			return true;
		}
		arr[i+2][j-1]=0;
	}
	return false;
}


int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	cin>>rows>>cols;
	int arr[rows][1000];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			arr[i][j]=0;
		}
	}
	int i=1;
	if(!solve_kinght(arr,rows,cols,0,0,i)){
		cout<<"cant be solved"<<endl;
	}
	return 0;   
}