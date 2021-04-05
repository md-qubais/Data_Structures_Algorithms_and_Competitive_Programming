#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
const int MAX=100000;
#define endl  "\n"
using namespace std;
unordered_map<int,int> m;
bool compare(int a,int b){
	return m[a]<m[b];

}
void get_ans(int *arr,int num,vector<int> &v,unordered_map<int,int> &m){
	for(int i=0;i<num;i++){
		if(m.find(arr[i])==m.end()){
			v.push_back(arr[i]);
            m[arr[i]]=i;
		}else{
			m[arr[i]]=i;
		}
	}

}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num;
	cin>>num;
	int arr[num];
	vector<int> v;
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	get_ans(arr,num,v,m);
	sort(v.begin(),v.end(),compare);
	for(auto it:v){
		cout<<it<<endl;

	}
	return 0;     
}