#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

void print_it1(int *arr,int n){
	int num=arr[0];
	cout<<arr[0]<<" ";
	for(int i=1;i<n;i++){
            if(num!=arr[i]){
            	num=arr[i];
            	cout<<num<<" ";

            }
	}
}

void print_it2(int *arr,int n){
	for(int i=0;i<n;i++){
		if(i==0){
			cout<<arr[i]<<" ";
		}else{
			if(arr[i]!=arr[i-1]){
				cout<<arr[i]<<" ";

			}
		}

	}

}



int32_t main(){
	qubais_judge;
	IOS;
	int arr[]={1,1,1,1,1,2,2,2,2,3,3,3,3,4,4,5,6,7,8,8,9,9,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	print_it1(arr,n);
	cout<<endl;
	print_it2(arr,n);	
	return 0;   
}