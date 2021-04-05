#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
void stock_span(vector<int> &arr){
	stack<int> s;
	cout<<1<<endl;
	s.push(0);
	for(int i=1;i<arr.size();i++){
		while(!s.empty() and arr[s.top()]<arr[i]){
			s.pop();
		}
		if(s.empty()){
			cout<<i+1<<endl;
			s.push(i);
		}else{
			cout<<i-s.top()<<endl;
			s.push(i);
		}
	}
}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){\
		cin>>v[i];
	}
	stock_span(v);
    return 0;
}