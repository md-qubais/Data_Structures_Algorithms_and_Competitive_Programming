#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int* extract(int arr[][100],int &n,int rows,int cols,int s){
	int sr=s-1;
	int sc=s-1;
	int er=rows-s;
	int ec=cols-s;
	n=2*(er-sr+ec-sc);
	int *oned=new int[n];
	int k=0;
	for(int i=sr;i<=er;i++){
		oned[k++]=arr[i][sc];
	}
	sc++;
	for(int i=sc;i<=ec;i++){
		oned[k++]=arr[er][i];
	}
	er--;
	for(int i=er;i>=sr;i--){
		oned[k++]=arr[i][ec];
	}
	ec--;
	for(int i=ec;i>=sc;i--){
		oned[k++]=arr[sr][i];
	}
	sr++;
	return oned;
}
void reverse(int *arr,int i,int j){
	while(i<j){
		swap(arr[i++],arr[j--]);
	}

}
void shell_rotate(int arr[][100],int rows,int cols,int s,int r){
	//extract and put into oned array;
	int n;
	int *oned=extract(arr,n,rows,cols,s);
	//rotate the array
	r=r%n;
	if(r<0){
		r=r+n;
	}
	reverse(oned,0,n-1);
	reverse(oned,0,r-1);
	reverse(oned,r,n-1);
	//put that oned array back to the shell
	int sr=s-1;
	int sc=s-1;
	int er=rows-s;
	int ec=cols-s;
	int k=0;
	for(int i=sr;i<=er;i++){
		arr[i][sc]=oned[k++];
	}
	sc++;
	for(int i=sc;i<=ec;i++){
		arr[er][i]=oned[k++];
	}
	er--;
	for(int i=er;i>=sr;i--){
		arr[i][ec]=oned[k++];
	}
	ec--;
	for(int i=ec;i>=sc;i--){
		arr[sr][i]=oned[k++];
	}
	sr++;
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
	int s;
	int r;
	cin>>s;
	cin>>r;
	shell_rotate(arr,rows,cols,s,r);
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;   
}