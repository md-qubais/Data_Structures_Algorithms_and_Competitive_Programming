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
		int n;
		cin>>n;
		int pain;
		cin>>pain;
		priority_queue<int> pq;
		while(n--){
			int num;
			cin>>num;
			pq.push(num);
		}
		int tot=0;
		while(!pq.empty() and pain>0){
			int num=pq.top();
			pq.pop();
			pain-=num;
			num=num/2;
			if(num>0){
				pq.push(num);
			}
			tot++;
		}
		if(pain>0){
			cout<<"Evacuate"<<endl;
		}else{
			cout<<tot<<endl;
		}
	}
	return 0;   
}