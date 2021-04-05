#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


bool boston_number(int num){
	int ans=0;
	int n=num;
	int res=0;
	while(n>0){
		ans+=n%10;
		n=n/10;
	}
	while(num%2==0){
		num=num/2;
		res+=2;
	}
	for(int i=3;i<=sqrt(num);i=i+2){
		while(num%i==0){
			num=num/i;
			if(i>9){
				int n1=i;
			while(n1>0){
				res+=n1%10;
				n1=n1/10;
			}
		}else{
			res+=i;
		}

		}
	}
	if(num>2){
		if(num>9){
			while(num>0){
			res+=num%10;
			num=num/10;
		}

		}
		else{
		res+=num;
	}
	}
   if(ans==res){
		return true;
	}

	return false;
}

int32_t main(){
	qubais_judge;
	IOS;
	int num;
	cin>>num;
	if(boston_number(num)){
		cout<<1<<endl;
	}else{
		cout<<0<<endl;
	}
	return 0;   
}