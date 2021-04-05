#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;	
	int n;
	cin>>n;
	while(n--){
		int num;
		cin>>num;
		for(int i=0;i<=num-1;i++){
			int a=i,b;
			for(int j=i+1;j<=num;j++){
                 b=j;
                 if((a*a)+(b*b)==num){
                 	cout<<"("<<a<<","<<b<<")"<<" ";
                 }
			}
		}
		cout<<endl;

	}
	return 0;   
}