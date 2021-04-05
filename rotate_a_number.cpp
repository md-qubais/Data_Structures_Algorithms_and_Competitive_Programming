#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	int num;
	int k;
	cin>>num>>k;
	int count=0;
	int temp=num;
	while(temp>0){
		temp/=10;
		count++;
	}
	k=k%count;
	if(k==0){
		cout<<num<<endl;
		return 0;
	}
	if(k<0){
		k=k+count;
	}
	int div=1;
	for(int i=1;i<=k;i++){
		div=div*10;
	}
	int mul=1;
	for(int i=1;i<=count-k;i++){
		mul=mul*10;
	}
	cout<<(num%div)*mul+((num/div))<<endl;
    return 0;   
}