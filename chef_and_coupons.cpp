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
		int d,c;
		cin>>d>>c;
		int tot1=0;
		int tot2=0;
		for(int i=0;i<3;i++){
			int num;
			cin>>num;
			tot1+=num;
		}
		for(int i=0;i<3;i++){
			int num;
			cin>>num;
			tot2+=num;
		}
		if(tot1>=150 and tot2>=150){
			if(tot1+tot2+c<tot1+tot2+d+d){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}else if((tot1>=150 and tot2<150) or (tot1<150 and tot2>=150)){
			if(tot1+tot2+d+c<tot1+tot2+d+d){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;   
}