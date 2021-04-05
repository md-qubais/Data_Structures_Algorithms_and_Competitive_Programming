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
    int up=0;
    
	for(int i=1;i<=n;i++){
		for(int s=1;s<=n-i;s++){
			cout<<"  ";
		}
		cout<<1;
		for(int j=1;j<=i-1;j++){
			for(int s=1;s<=3;s++){
				cout<<" ";
			}
			if(j==i-1 ){
				cout<<1;
				continue;
			}
			if(j==1 or j==i-2){
				cout<<i-1;
				
			}else{
				if((i-1)%2==0){
					cout<<i-1;
				}else{
					cout<<i-1;
				}
			}
		}
		cout<<endl;
	}
	return 0;   
}