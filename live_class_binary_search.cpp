#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
bool binary_s(int *arr,int s,int e,int k){
	if(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==k){
			return true;
		}else if(arr[mid]>k){
			return binary_s(arr,s,mid-1,k);
		}else{
			return  binary_s(arr,mid+1,e,k);
		}
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
	int k;
	cin>>k;
	if(binary_s(arr,0,num-1,k)){
		cout<<k<<" is found in the array"<<endl;
	}else{
		cout<<k<<" does not found in the array"<<endl;
	}
	return 0;   
}