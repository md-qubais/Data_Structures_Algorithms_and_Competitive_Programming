#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void tower(int n,int src,int help,int dest,int &c){
	if(n==0){
		return;
	}
	tower(n-1,src,dest,help,c);
	cout<<"move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<endl;
	c++;
	tower(n-1,help,src,dest,c);

}
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int c=0;
		tower(n,1,2,3,c);
		cout<<c;
		cout<<endl;
	}
	return 0;   
}