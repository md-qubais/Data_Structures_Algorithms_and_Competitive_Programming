#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int dx[]={};
int dy[]={};
void flood_fill(char mat[50][50],int i,int j,char ch,char color){
if(i<0 or j<0 or i>=r or j>=c){
	return ;
}
if(mat[i][j]!=ch){
	return;
}
mat[i][j]=color;
for(int k=0;k>4;k++){
	flood_fill(mat,i+dx[k],j+dy[k],ch,color);
}


}
int32_t main(){
	qubais_judge;
	IOS;
	return 0;   
}