#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int32_t main(){
	qubais_judge;
	IOS;
	map<int,int> m;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    int k=0;
    for(auto it:m){
    	int num=it.second;
    	while(num--){
    		arr[k++]=it.first;
    	}
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
	return 0;
}