#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int get_cost(int *arr,int num){
	int ans=0;
	for(int i=0;i<num-1;i++){
		int j=i+1;
		for(;j<num;j++){
			if(arr[i]>arr[j]){
				ans++;
			}else{
				break;
			}
		}
		if(j<num){
			break;
		}
	}
	return ans;
}


int cost(int *arr,int num){
	int ans=0;
	int brr[num];
	brr[num-1]=0;
	int count=1;
	for(int i=num-2;i>=0;i--){
		if(arr[i]>arr[i+1]){
			brr[i]=count;
		}else{
			brr[i]=0;
		}
		count++;
	}
	for(int i=0;i<num;i++){
		ans+=brr[i];
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
	   // sort(arr,arr+num,greater<int>{});
		cout<<cost(arr,num)<<endl;
	}
	return 0;   
}