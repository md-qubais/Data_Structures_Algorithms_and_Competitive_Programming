#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void print_it(int n){
	int num=n/2;
	for(int i=0;i<(num+1);i++){
		for(int s=0;s<num-i;s++){
			cout<<"\t";
		}
		for(int j=0;j<=i;j++){
			cout<<"*\t";
		}
		for(int j=0;j<=i-1;j++){
			cout<<"*\t";
		}
		cout<<endl;
	}
	for(int i=1;i<=num-1;i++){
		for(int s=1;s<=i;s++){
			cout<<"\t";
		}
		for(int j=num;j>=i;j--){
			cout<<"*\t";
		}
		for(int j=num-1;j>=i;j--){
			cout<<"*\t";
		}

		cout<<endl;
	}
	for(int s=0;s<num;s++){
			cout<<"\t";
		}
		cout<<"*";
}


int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	print_it(n);
	return 0;   
}