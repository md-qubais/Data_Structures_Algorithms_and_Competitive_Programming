#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;	
	int n;
	cin>>n;
	int k=0;
	int ans[n+1];
	int arr1[n];
	int arr2[n];
	int m1=0,m2=0;
	for(int i=0;i<n;i++){
		cin>>arr1[i];
		m1=max(arr1[i],m1);
	}
	for(int i=0;i<n;i++){
		cin>>arr2[i];
		m2=max(arr2[i],m2);
	}
    int f1[1001]={0};
    int f2[1001]={0};
    for(int i=0;i<n;i++){
    	f1[arr1[i]]++;
    	f2[arr2[i]]++;
    }
    for(int i=0;i<max(m1,m2);i++){
    	if(f1[i]!=0 and f2[i]!=0){
           ans[k++]=i;
           f1[i]--;
           f2[i]--;
           i--;
    	}
    }
    cout<<"[";
    for(int i=0;i<k-1;i++){
    	cout<<ans[i]<<", ";
    }
    cout<<ans[k-1]<<"]"<<endl;

	return 0;   
}