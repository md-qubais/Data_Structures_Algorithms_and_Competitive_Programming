#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

bool isInverse(int *arr,int *brr,int num){
	for(int i=0;i<num;i++){
		if(brr[arr[i]]!=i){
			return false;
		}
	}

	return true;
}


int32_t main(){
	qubais_judge;
	IOS;	
	int num;
	cin>>num;
	int arr[num];
	int brr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	for(int i=0;i<num;i++){
		cin>>brr[i];
	}
	if(isInverse(arr,brr,num)){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	return 0;   
}