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
	int arr[n];
	int m=INT_MIN;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		m=max(m,arr[i]);
	}
    int freq[m+1]={0};
    for(int i=0;i<n;i++){
    	freq[arr[i]]++;
    }
    for(int i=0;i<m+1;i++){
    	if(freq[i]==1){
    		cout<<i<<" ";
    	}
    }
    cout<<endl;
	return 0;   
}