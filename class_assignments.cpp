#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
//its nothing but a fibonacci number
//its like same as the fibonacci number


int get(int n){
	int a[n],b[n];
	a[0]=1;
	b[0]=1;
	for(int i=1;i<n;i++){
		a[i]=a[i-1]+b[i-1];
		b[i]=a[i-1];
	}
	
	return a[n-1]+b[n-1];
}



int get1(int n){
	if(n==1){
		return 2;
	}
	if(n==2){
		return 3;
	}
	if(n==3){
		return 5;
	}
	return get1(n-1)+get1(n-2);
}


int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	int c=0;
	while(t--){
		c++;
		int n;
		cin>>n;
		cout<<"#"<<c<<" : ";
		cout<<get1(n)<<endl;
	}	
	return 0;   
}