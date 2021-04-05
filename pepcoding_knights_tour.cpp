#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;



int rowdir[]={-2,-1,+1,+2,+2,+1,-1,-2};
int coldir[]={+1,+2,+2,+1,-1,-2,-2,-1};






int visited[1000][1000]={0};
void knight(int n,int rows,int cols,int i){
	
	if(visited[rows][cols]!=0 or rows<0 or cols<0 or rows>=n or cols>=n){
		return;
	}
	if(i==n*n){
		visited[rows][cols]=i;
		for(int i1=0;i1<n;i1++){
			for(int j1=0;j1<n;j1++){
				cout<<visited[i1][j1]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		visited[rows][cols]=0;
	
	}
	if(visited[rows][cols]!=0 or rows<0 or cols<0 or rows>=n or cols>=n){
		return;
	}
	visited[rows][cols]=i;
	for(int k=0;k<=8;k++){
		knight(n,rows+rowdir[k],cols+coldir[k],i+1);
	}
	visited[rows][cols]=0;
}



int32_t main(){
	qubais_judge;
	IOS;
	int n;
	int rows;
	int cols;
	cin>>n>>rows>>cols;
	knight(n,rows,cols,1);
	return 0;   
}