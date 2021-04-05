#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

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
	int ans[max(n1,n2)+1]={0};
	int i=n1-1,j=n2-1;
	int k=max(n1,n2);
	int carry=0;
	while(i>=0 and j>=0){
		int sum=arr1[i]+arr2[j]+carry;
		ans[k--]=sum%10;
		carry=sum/10;
		i--;
		j--;
	}
	while(i>=0){
		int sum=arr1[i--]+carry;
		ans[k--]=sum%10;
		carry=sum/10;
	}
	while(j>=0){
		int sum=arr2[j--]+carry;
		ans[k--]=sum%10;
		carry=sum/10;
	}
	if(carry>0){
		ans[k--]=carry;
		for(int i=0;i<=max(n1,n2);i++){
			cout<<ans[i]<<endl;
		}
		return 0;
	}
	for(int i=1;i<=max(n1,n2);i++){
			cout<<ans[i]<<endl;
	}
	return 0;   
}