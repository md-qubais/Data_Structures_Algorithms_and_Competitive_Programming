#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void longest_subarray(int *arr,int num){
	int s=0;
	int e=0;
	int m=0;
	for(int i=0;i<num;i++){
		int count0=0;
		int count1=0;
		for(int j=i;j<num;j++){
			if(arr[j]==0){
				count0++;
			}else{
				count1++;
			}

		if(count1==count0 and (j-i+1)>m){
			s=i;
			e=j;
			m=(e-s+1);
		}
		}
	}


	if(m==0){
		cout<<"None"<<endl;
	}else{
		cout<<s<<" "<<e<<endl;
	}
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
		longest_subarray(arr,num);
	}	
	return 0;   
}