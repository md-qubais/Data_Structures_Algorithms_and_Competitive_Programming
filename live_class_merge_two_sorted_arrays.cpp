#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


void sort(int *arr1,int *arr2,int n,int m){
	int k=m+n-1;
	int i=m-1;
	int j=n-1;
	while(k>=0 and i>=0 and j>=0){
		if(arr1[i]>arr2[j]){
			arr1[k--]=arr1[i--];
		}else{
             arr1[k--]=arr2[j--];
		}

	}

     
	while(i>=0){
         arr1[k--]=arr1[i--];
	}

	while(j>=0){
        arr1[k--]=arr2[j--];
	}

}



int32_t main(){
	qubais_judge;
	IOS;	
	int n=4,m=3;
	int arr1[n+m]={1,2,3};
	int arr2[n]={4,5,6,7};
	sort(arr1,arr2,n,m);
	for(int i=0;i<n+m;i++){
		cout<<arr1[i]<<endl;

	}
	return 0;   
}