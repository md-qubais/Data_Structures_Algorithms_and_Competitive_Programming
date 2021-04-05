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
	int f=0,l=0;
	while(true){
		string s;
		cin>>s;
		if(s=="quit"){
			break;
		}
		if(s=="display"){
			for(int i=0;i<l;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		if(s=="add"){
			int num;
			cin>>num;
			if(l<n){
				arr[l++]=num;
			}else{
				cout<<"Queue overflow"<<endl;
			}
		}
		if(s=="size"){
			cout<<n<<endl;
		}
		if(s=="remove"){
			if(l==0){
				cout<<"Queue underflow"<<"\n"<<-1<<endl;
			}else{
				for(int i=0;i<l-1;i++){
					arr[i]=arr[i+1];
				}
				l--;
			}
		}
		if(s=="peek"){
			if(f!=l){
				cout<<arr[f]<<endl;
			}else{
				cout<<"Queue underflow"<<"\n"<<-1<<endl;
			}
		}
	}
	return 0;
}