#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int get_last(char ch[1000][1000],int rows,int cols,int k,int s){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(ch[i][j]=='.'){
				s=s-2;

			}else if(ch[i][j]=='*'){
				s+=5;
			}else{
				break;

			}
			if(j<cols-1){
				s--;
			}
}
}
	return s;
}



int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	int k,s;
	cin>>rows>>cols>>k>>s;
	char ch[1000][1000];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>ch[i][j];
		}
	}
	int ans=get_last(ch,rows,cols,k,s);
	if(ans>=k){
		cout<<"Yes"<<endl;
		cout<<ans<<endl;
	}else{
		cout<<"No"<<endl;
		
	}
	return 0;   
}