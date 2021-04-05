#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void move_x_to_end(string &str,int n,int i,int j){
	if(i>=n){
		return;
	}
	if(j>=n){
		move_x_to_end(str,n,i+1,i+1);
		return;
	}
	if(str[j]=='x'){
		swap(str[j],str[j+1]);
	}
	move_x_to_end(str,n,i,j+1);


}



int32_t main(){
	qubais_judge;
	IOS;	
	string str;
	cin>>str;
	move_x_to_end(str,str.length()-1,0,0);
	cout<<str<<endl;
	return 0;   
}