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
		int cand,frnd;
		cin>>cand>>frnd;
		int num=cand%frnd;
		int Min=INT_MAX;
		if(num==0){
			cout<<0<<endl;
            continue;
		}else{
			Min=min(num,frnd-num);
			cout<<Min<<endl;
		}

	}
	return 0;   
}