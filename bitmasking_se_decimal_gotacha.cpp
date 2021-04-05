#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string convert_to_binary(int num){
	string ans="";
	while(num>0){
		ans+=num%2+'0';
		num=num/2;
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int mask=(1<<n)-1;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<=mask;i++){
		if(i==0){
			for(int j=0;j<n;j++){
				cout<<"-\t";
			}
			continue;
		}
		string str=convert_to_binary(i);
		for(int j=0;j<n;j++){
			if(str[i]=='1'){
				cout<<arr[i]<<"\t";
			}else{
				cout<<"-\t";
			}
		}
		cout<<endl;
	}
	return 0;   
}