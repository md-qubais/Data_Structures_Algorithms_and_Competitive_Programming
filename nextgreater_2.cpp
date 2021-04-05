#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void find_next_greater(int *arr,int *ans,int n){
	int i=0;
	int k=0;
	while(i<n){
		int j=(i+1)%n;
		bool b=false;
		while(i!=j){
			if(arr[j]>arr[i]){
				ans[k++]=arr[j];
				b=true;
				break;
			}
			j=(j+1)%n;
		}
		if(b==false){
			ans[k++]=-1;
		}
		i++;
	}

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
	int ans[n];
	find_next_greater(arr,ans,n);
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}

	return 0;   
}