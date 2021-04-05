#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool can_place(char ch[][1000],int n,int i,int j){
	//checking up 
	int r=i,c=j;
	while(r>=0 ){
		if(ch[r][c]=='Q'){
			return false;
		}
		r--;
	}
	r=i,c=j;
	//checking diagonals
	while(r>=0 and c>=0){
		if(ch[r][c]=='Q'){
			return false;
		}
		r--,c--;
	}
	r=i,c=j;
	while(r>=0 and c<n ){
		if(ch[r][c]=='Q'){
			return false;
		}
		r--,c++;
	}
	return true;
}


bool solve(char ch[][1000],int n,int i){
	if(i==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<ch[i][j]<<" ";				 
			}
			cout<<endl;
		}
		return true;
	}
	for(int j=0;j<n;j++){
		if(can_place(ch,n,i,j)){
			ch[i][j]='Q';
			
			if(solve(ch,n,i+1)){
				return true;
			}
		}
		//here it is backtracking
		ch[i][j]='-';
	}
	return false;
}




int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	char ch[1000][1000];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			ch[i][j]='-';
		}
	}
	solve(ch,n,0);
	return 0;   
}