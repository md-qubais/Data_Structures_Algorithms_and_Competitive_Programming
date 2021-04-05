#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void odd(int n){
	if(n==1){
		cout<<n<<endl;
		return;
	}
	if(n%2!=0){
		cout<<n<<endl;
	}
	odd(n-1);
}
void even(int n,int i){
	if(i==n){
		if(i%2==0){
			cout<<i<<endl;
		}
		return;
	}
	if(i%2==0){
		cout<<i<<endl;
	}
	even(n,i+1);

}
int32_t main(){
	qubais_judge;
	IOS;	
	int n;
	cin>>n;
	odd(n);
	even(n,2);
	return 0;   
}