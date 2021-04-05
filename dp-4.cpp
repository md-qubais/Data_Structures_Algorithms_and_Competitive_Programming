#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool can_do(bool dp[100][100],int tar,int ele){
	if(dp[ele][tar]==true){
		return true;
	}
	return false;
}


bool get(int *arr,int n,int tar){
	int array[n+1]={0};
	for(int i=1;i<n+1;i++){
		array[i]=arr[i-1];
	}
	bool dp[100][100]={false};
	dp[0][0]=true;
	for(int i=1;i<n+1;i++){
		dp[i][0]=true;
	}
	for(int i=1;i<tar+1;i++){
		dp[0][i]=false;
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<tar+1;j++){
			if(can_do(dp,j-array[i],array[i-1])){
				dp[i][j]=true;
			}
			 if(can_do(dp,j,array[i-1])){
				dp[i][j]=true;
			}
		}
	}
	for(int i=0;i<n+1;i++){
		for(int j=0;j<tar+1;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n+1;i++){
		if(dp[i][tar]){
			return true;	
		}
	}
	return false;
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int tar;
	cin>>tar;
	if(get(arr,n,tar)){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	return 0;   
}