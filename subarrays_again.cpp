#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int again(int *arr,int num){
	int ans=0;
	for(int i=0;i<num;i++){
		for(int j=i;j<num;j++){
			if(j==i){
				continue;
			}
			if(arr[i]>=arr[j]){
				if((j-i+1)>=ans){
					ans=(j-i+1);
				}
			}
		}
	}
	return ans;
}




int32_t main(){
	qubais_judge;
	IOS;	
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		int arr[num];
		for(int i=0;i<num;i++){
			cin>>arr[i];
		}
		if(arr[0]>=arr[num-1]){
			cout<<num<<endl;
			continue;
		}
		cout<<again(arr,num)<<endl;
	}
	return 0;   
}