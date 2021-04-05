#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		int c;
		cin>>c;
		int temp=c;
		int i=0;
		while(temp>0){
			temp=temp/2;
			i++;
		}
		int a=pow(2,i-1)-1;
		int b=a^c;
		cout<<(a*b)<<endl;
	}
    return 0;
}