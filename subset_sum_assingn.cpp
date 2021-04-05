#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool subset_sum(int *arr,int n,int i,int j,int *ans){
	if(i==n){
		int sum=0;
		bool a=true;
		for(int k=0;k<j;k++){
			sum+=ans[k];
			a=false;
		}
		if(sum==0  and a==false){
			return true;
		}
		return false; 
	}
	ans[j]=arr[i];
	bool b1=subset_sum(arr,n,i+1,j+1,ans);
	bool b2=subset_sum(arr,n,i+1,j,ans);
	if(b1 or b2){
		return true;
	}
	return false;
}
int32_t main(){
	qubais_judge;
	IOS;	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int ans[10000];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(subset_sum(arr,n,0,0,ans)){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
   }
	return 0;   
}