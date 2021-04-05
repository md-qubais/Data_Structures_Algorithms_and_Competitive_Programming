#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

bool is_sorted(int *arr,int num){
	if(num<=1){
		return true;
	}
	if(arr[0]<arr[1] and is_sorted(arr+1,num-1)){
		return true;
	}
	return false;
}



int32_t main(){
	qubais_judge;
	IOS;	
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	if(is_sorted(arr,num)){
		cout<<"sorted"<<endl;
	}else{
		cout<<"not sorted"<<endl;
	}
	return 0;   
}