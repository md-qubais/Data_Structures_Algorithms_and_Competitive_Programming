#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int get_sum(int b,int n1,int n2){
	int ans=0;
	int carry=0;
	int p=1;
	while(n1>0 or n2>0 or carry!=0){
		int num1=n1%10;
		int num2=n2%10;
		int sum=num1+num2+carry;
		ans+=(sum%b)*p;
		carry=sum/b;
		p=p*10;
		n1=n1/10;
		n2=n2/10;
	}
	return ans;
}


int32_t main(){
	qubais_judge;
	IOS;
	int b;
	int n1;
	int n2;
	cin>>b>>n1>>n2;
	int temp=n1;
	int ansp=1;
	int ans=0;
	if(n1==0 or n2==0){
		cout<<0<<endl;
		return 0;
	}
	while(n2>0){
		if(n1==0){
			n1=temp;
		}
		int t1=n2%10;
		int a=0;
		int p=1;
		int carry=0;
		while(n1>0 or carry!=0){
			int num=n1%10;
			int mul=num*t1+carry;
			a+=(mul%b)*p;
			carry=mul/b;
			
			p=p*10;
			n1=n1/10;
		}
		if(ans==0){
			ans=a*ansp;
		}else{
			ans=get_sum(b,ans,a*ansp);
		}
		ansp*=10;
		n2=n2/10;
	}
	cout<<ans<<endl;
	return 0;   
}