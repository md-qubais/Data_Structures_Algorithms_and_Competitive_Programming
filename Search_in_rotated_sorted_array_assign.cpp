#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int search_in(int *arr,int num,int k){
	int s=0;
	int e=num-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==k){
			return mid;
		}
		if(arr[s]==k){
			return s;
		}
		if(arr[e]==k){
			return e;
		}
		if(arr[s]<arr[mid] ){
			//if the first part is sorted
			//and if the element is present
			//in this part

			
			if(k>=arr[s] and k<=arr[mid]){
				e=mid-1;
			}else{
				s=mid+1;
			}
		}else{
			//else if the another part is sorted
			//and if the element is present
			//in this part



			if(k>=arr[mid] and k<=arr[e]){
				s=mid+1;
			}else{
				e=mid-1;
			}
		}



	}
	return -1;
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
	int k;
	cin>>k;
	cout<<search_in(arr,num,k)<<endl;
}
	return 0;   
}