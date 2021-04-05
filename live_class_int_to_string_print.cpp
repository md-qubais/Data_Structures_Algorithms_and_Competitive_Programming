#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
char ch[][1000]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void convert(int num){
	if(num<=0){
		return;
	}
	convert(num/10);
	cout<<ch[num%10]<<" ";

}


int32_t main(){
	qubais_judge;
	IOS;	
	int num;
	cin>>num;
	convert(num);
	return 0;   
}