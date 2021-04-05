#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int rowdir[]={+2,+1,-1,-2,-2,-1,+1,+2};
int coldir[]={+1,+2,+2,+1,-1,-2,-2,-1};

bool can_place(int arr[][1000],int rows,int cols,int i,int j){
	if(i>=0 and j>=0 and i<rows and j<cols and arr[i][j]==0){	
		return true;
	}	
	return false;
}

bool solve_kinght(int arr[][1000],int rows,int cols,int i,int j,int num){
	    //cout<<num<<endl;
		if((num+1)==(rows*cols)){
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	for(int k=0;k<8;k++){
	if(can_place(arr,rows,cols,rowdir[k],coldir[k])){
		arr[rowdir[k]][coldir[k]]=num;
		if(solve_kinght(arr,rows,cols,rowdir[k],coldir[k],num+1)){
			return true;
		}else{
			arr[rowdir[k]][coldir[k]]=0;
		}	
	}
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
	int i=0;
	if(!solve_kinght(arr,rows,cols,0,0,i)){
		cout<<"cant be solved"<<endl;
	}
	return 0;   
}