#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void subset_sum(int *arr,int n,int i,int j,int *ans,int k){
	if(i==n){
		int sum=0;
		bool a=true;
		for(int m=0;m<j;m++){
			sum+=ans[m];
			a=false;
		}
	    if(sum==k  and a==false){
			for(int m=j-1;m>=0;m--){
				cout<<ans[m]<<" ";
			}
			cout<<endl;
			return ;
		}
		return ; 
	}
	ans[j]=arr[i];
	subset_sum(arr,n,i+1,j+1,ans,k);
	subset_sum(arr,n,i+1,j,ans,k);
	return ;
}
void reverse_it(int *arr,int n){
	int i=0;
	int j=n;
	while(i<j){
		swap(arr[i++],arr[j--]);
	}

}



int32_t main(){
	qubais_judge;
	IOS;	
		int n;
		cin>>n;
		int arr[n];
		int ans[10000];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
	//	reverse_it(arr,n-1);
		int k;
		cin>>k;
	    subset_sum(arr,n,0,0,ans,k);
	return 0;   
}