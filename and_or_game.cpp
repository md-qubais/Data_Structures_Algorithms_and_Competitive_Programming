#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int print(int n1,int n2){
	int arr1[n1];
	int arr2[n2];
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}
	vector<int> ans;
	set<int> s;
	s.insert(0);
	int i=0;
	int j=0;
	int v=0;
	int c=1;
	while(i<n1 and j<n2){
		if(c==1){
			v=v|(arr1[i++]);
			s.insert(v);
			c=0;
		}else{
			s.insert(v);
			v=v&(arr2[j++]);
			c=1;
		}
	}
	while(i<n1){
		v=v|arr1[i++];
		s.insert(v);
	}
	while(j<n2){
		v=v&(arr2[j++]);
		s.insert(v);
	}
	for(auto it:s){
		cout<<it<<" ";
	}
	cout<<endl;
	return 0;
}


int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		int n1,n2;
		cin>>n1>>n2;
		cout<<print(n1,n2)<<endl;
	}
	return 0;   
}