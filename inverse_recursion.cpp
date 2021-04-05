#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

int* get_inverse(int *arr,int &i,int n,int *ans){
if(i==0){
ans=new int[n];
}
if(i==n){
return ans;
}
ans[arr[i]]=i;
i++;
return get_inverse(arr,i,n,ans);
}



int32_t main(){
	qubais_judge;
	IOS;
	int num;
	cin>>num;
	int n=num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
    int *ans;
    int i=0;
    ans=get_inverse(arr,i,num,ans);
    for(int i=0;i<num;i++){
    	cout<<ans[i]<<" ";
    }
	
	return 0;   
}