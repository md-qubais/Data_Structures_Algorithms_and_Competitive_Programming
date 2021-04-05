#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


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
		int amt;
		cin>>amt;
		sort(arr,arr+num);
		int a,b;
		int count=0;
		for(int i=0;i<num;i++){
			for(int j=0;j<num;j++){
				if(i==j){
					continue;
				}
				if(arr[i]+arr[j]==amt){
					if(count==0){
						a=arr[i];
						b=arr[j];
						count=1;
					}else{
						int n=arr[j]-arr[i];
						
						if(n<0){
							n=-n;

						}
						if((b-a)>(n)){
							a=arr[i];
							b=arr[j];
						}
					}
				}

			}
		}
		cout<<"Deepak should buy roses whose prices are "<<a<<" and "<<b<<"."<<endl;
	}
	return 0;   
}