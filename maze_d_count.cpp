#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;



void print(int rows,int cols,int i,int j,string str,int &k){
	if(i==rows and j==cols){
		cout<<str<<" ";
		k++;
		return ;
	}
	if(i<rows){
		print(rows,cols,i+1,j,str+'V',k);
		
	}
	if(j<cols){
		print(rows,cols,i,j+1,str+'H',k);
		
	}
	return ;
}
int32_t main(){
	qubais_judge;
	IOS;	
	int rows,cols;
	cin>>rows>>cols;
	string str="";
	int k=0;
	print(rows,cols,1,1,str,k);
	cout<<endl;
	cout<<k<<endl;
	return 0;   
}