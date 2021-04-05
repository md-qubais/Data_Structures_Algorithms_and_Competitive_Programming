#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


int32_t main(){
	qubais_judge;
	IOS;
	int a,b,c;
	cin>>a>>b>>c;
	int n1=(-b+sqrt((b*b)-4*a*c))/(2*a);
	int n2=(-b-sqrt((b*b)-4*a*c))/(2*a);
	if(n1<0 or n2<0){
		cout<<"Imaginary"<<endl;
		return 0;
	}

	if(n1==n2){
		cout<<"Real and Equal"<<endl;
		cout<<n1<<" "<<n2<<endl;
	}else {
		cout<<"Real and Distinct"<<endl;
		if(n1>n2){
			cout<<n2<<" "<<n1<<endl;
		}else{
			cout<<n1<<" "<<n2<<endl;
		}
	}
	return 0;   
}