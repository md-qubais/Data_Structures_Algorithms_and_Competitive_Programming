#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int first_occurance(int *arr,int i,int num,int k){
if(i==num){
	return -1;
}

if(arr[i]==k){
	return i;
}
return first_occurance(arr,i+1,num,k);
}

int last_occurances(int *arr,int num,int k){
	if(num==0){
		return -1;
	}
	if(arr[num-1]==k){
		return num-1;
	}
	return last_occurances(arr,num-1,k);
}

void all_occurances(int *arr,int i,int num,int k){
	if(i==num){
		return ;
	}
	if(arr[i]==k){
		cout<<i<<" ";
	}
	all_occurances(arr,i+1,num,k);
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
	int k;
	cin>>k;
	cout<<first_occurance(arr,0,num,k)<<endl;
	cout<<last_occurances(arr,num,k)<<endl;
	all_occurances(arr,0,num,k);
	return 0;   
}