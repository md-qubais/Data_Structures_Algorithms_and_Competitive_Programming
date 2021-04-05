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
	int num=n;
	if(num%2==0){
		num=num-1;
		cout<<num<<endl;
	}else{

		cout<<num<<endl;

	}
	bool b=false;
	for(int i=2;i<=n;i++){
                  if(b){
                  	num+=2;
                  	cout<<num<<endl;
                  	continue;
                  }
                  if(num==1){
                  	b=true;
                  	num+=1;
                  	cout<<num<<endl;
                  	continue;
                  }        
                  if(num%2==0){
                  	num=num-1;
                  	cout<<num<<endl;
                  }else{
                  	num=num-2;
                  	cout<<num<<endl;
                  }

	}
	return 0;   
}