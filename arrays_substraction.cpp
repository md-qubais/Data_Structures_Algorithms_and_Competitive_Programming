#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
string minWindow(string s, string t) {
 string ans="";
 return ans;       
}

int32_t main(){
	qubais_judge;
	IOS;
	int n1;
	cin>>n1;
	int arr1[n1];
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	int n2;
	cin>>n2;
	int arr2[n2];
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}
	int ans[min(n1,n2)+1]={0};
	int k=min(n1,n2);
	int i=n1-1;
	int j=n2-1;
	int borrow=0;
	while(i>= 0 and j>=0){
		int num=arr2[j--]-borrow;
		if(num<arr1[i]){
			borrow=1;
			ans[k--]=num+10-arr1[i--];
		}else{
			borrow=0;
			ans[k--]=num-arr1[i--];
		}
	}
	while(j>=0){
		ans[k--]=arr2[j--]-borrow;
	}
	if(ans[0]==0){
		for(int i=1;i<=min(n1,n2);i++){
			cout<<ans[i]<<" "<<endl;
		}
		cout<<endl;
		return 0;
	}
	for(int i=0;i<=min(n1,n2);i++){
		cout<<ans[i]<<" "<<endl;
	}
	cout<<endl;
	return 0;   
}