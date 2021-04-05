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
	int arr[n+1];
  int count=2;
	for(int i=1;i<=2*n+1;i++){
		cout<<" ";
	}
  cout<<"  ";
	cout<<1<<endl;
	for(int i=2;i<=n;i++){
		for(int s=1;s<=2*n+1-count;s++){
			cout<<" ";
		}
    cout<<"  ";
    count+=2;
		if(i==2){
			cout<<1<<"   "<<1<<endl;
			continue;
		}else if(i==3){
			cout<<1<<"   "<<2<<"   "<<1<<endl;
			arr[0]=1;
			arr[1]=2;
			arr[2]=1;
			continue;
		}else{
			int pre[i]={0};
			pre[0]=1;
			int k=1;
            for(int j=0;j<i-2;j++){
               pre[k++]=arr[j]+arr[j+1];
            }
			pre[i-1]=1;
			for(int j=0;j<i;j++){
				cout<<pre[j];
				for(int s=1;s<=3;s++){
					cout<<" ";
				}
			}
			for(int m=0;m<i;m++){
				arr[m]=pre[m];
			}
			cout<<endl;
		}
	}
	return 0;   
}