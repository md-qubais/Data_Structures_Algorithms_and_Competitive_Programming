#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void get(int n,int k,int len,int digit,vector<int>&ans){
	if(len==n){
		ans.push_back(digit);
		return;
	}
	for(int i=0;i<=9;i++){
		if(len==0 and i==0){
			continue;
		}
		else if(len!=0){
			if(abs((digit%10)-i)==k){
				get(n,k,len+1,digit*10+i,ans);
			}else{
				continue;
			}
		}
		else if(len==0){
			get(n,k,len+1,i,ans);
		}
	}
}
vector<int> numsSameConsecDiff(int n, int k){
	vector<int> ans;
	get(n,k,0,0,ans);
	return ans;

}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int k;
	cin>>k;
	vector<int> ans=numsSameConsecDiff(n,k);
	for(auto it:ans){
		cout<<it<<" ";
	}
	cout<<endl;
	return 0;
}
