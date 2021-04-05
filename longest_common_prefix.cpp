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
		int num;
		cin>>num;
		cin.ignore();
		string str[num];
		int max=INT_MAX;
		string c;
		for(int i=0;i<num;i++){
			cin>>str[i];
			if(str[i].length()<max){
				max=str[i].length();
				c=str[i];
			}
		}
		int ans=-1;
		int i=0;
		while(true){
			if(i==num){
				break;
			}
			if(c[i]=='\0'){
				break;
			}
			char ch=c[i];
			bool b=false;

			for(int j=1;j<num;j++){
				string sname=str[j];
				if(sname[i]!=ch ){
					b=true;
					break;
				}
			}

			if(b==true){
				break;
			}else{
				ans=1;
				cout<<ch<<"";
			}
			i++;
		}
		if(ans==-1){
			cout<<"-1"<<endl;
		}
		cout<<endl;
          
	}
	return 0;   
}