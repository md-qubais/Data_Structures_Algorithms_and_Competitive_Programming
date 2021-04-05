#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool can_place(char ch[][1001],int rows,int cols,int i,int j,int count){
	int c=0;
	for(int k=0;k<rows;k++){
		if(ch[k][j]=='*'){
			c++;
		}
	}
	for(int k=0;k<cols;k++){
		if(ch[i][k]=='*'){
			c++;
		}
	}
	if(ch[i][j]=='*'){
		c--;
	}
	if(c!=count){
		return false;
	}

	return true;
}
bool did_have(char ch[][1001],int rows,int cols,int i,int j){
	for(int k=0;k<cols;k++){
		if(ch[i][k]=='*'){
			return true;
}
	}
	return false;
}
int32_t main(){
	qubais_judge;
	IOS;
	int rows,cols;
	int arr1[10000]={0};
	int arr2[10000]={0};
	cin>>rows>>cols;
	char ch[rows][1001];
	int count=0;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>ch[i][j];
			if(ch[i][j]=='*'){
				arr1[i]++;
				arr2[j]++;
				count++;
			}
		}
	}
	int i=0,j=0;
	int pi=0,pj=0;
	bool b=false;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(arr1[i]==0 and arr2[j]==0){
				continue;
			}
			int num=arr1[i]+arr2[j];
			if(ch[i][j]=='*'){
				num--;
			}
			if((num)==count){
				if(b==false){
					pi=i;
					pj=j;
				}else if(pi>=i and pj>=j ){
					pi=i;
					pj=j;
				}
				b=true;
			}
		}
	}
	if(b){
		cout<<"YES"<<endl;
		cout<<pi+1<<" "<<pj+1<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;   
}