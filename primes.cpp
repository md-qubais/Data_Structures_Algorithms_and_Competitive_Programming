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
        int n;
        cin>>n;
        int count=0;
        while(n>2){
            n=n/2;
            if(n<=1){
                break;
            }
            count++;
        }
        cout<<count<<endl;
    }
	return 0;   
}
