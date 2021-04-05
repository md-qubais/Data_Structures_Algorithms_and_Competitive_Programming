#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int sum_of_the_array(int *arr,int num){
	//base case
	if(num==0){//or here we can also -->
		//write num==0  return 0;
		return 0;
	}
	//recursive case
	return arr[0]+sum_of_the_array(arr+1,num-1);
}
int sum2(int *arr,int n){
	if(n<=0){
		return 0;
	}
	return sum2(arr,n-1)+arr[n-1];
}

int sum3(int *arr,int n){
	if(n<0){
		return 0;
	}
	return arr[n]+sum3(arr,n-1);
}


int32_t main(){
	qubais_judge;
	IOS;	
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;++i){
		cin>>arr[i];
	}
	cout<<sum_of_the_array(arr,num)<<endl;
	cout<<sum2(arr,num)<<endl;
	cout<<sum3(arr,num-1)<<endl;
	return 0;   
}