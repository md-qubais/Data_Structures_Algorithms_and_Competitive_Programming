#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void print_increasing(int *arr,int num){
	if(num==0){
		return;
	}else{
		cout<<arr[0]<<" ";
		print_increasing(arr+1,num-1);
	}
}

void print_decreasing(int *arr,int num){
	if(num==0){
		return ;
	}
	cout<<arr[num-1]<<" ";
	print_decreasing(arr,num-1);
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
	print_increasing(arr,num);
	cout<<endl;
	print_decreasing(arr,num);
	return 0;   
}