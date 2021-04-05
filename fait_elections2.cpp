#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int print(int n1,int n2){
	int ans=0;
	vector<int> arr1(n1);
	vector<int> arr2(n2);
	int s1=0;
	int s2=0;
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
		s1+=arr1[i];
	}
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
		s2+=arr2[i];
	}
	if(s1>s2){
		return 0;
	}
	for(int i=0;i<n1;i++){
		int min=*min_element(arr1.begin(),arr1.end());
		int mi=min_element(arr1.begin(),arr1.end())-arr1.begin();
		int max=*max_element(arr2.begin(),arr2.end());
		int ma=max_element(arr2.begin(),arr2.end())-arr2.begin();
		if(min<max){
			swap(arr1[mi],arr2[ma]);
			s1=accumulate(arr1.begin(),arr1.end(),0);
			s2=accumulate(arr2.begin(),arr2.end(),0);
			ans++;
		}
		if(s1>s2){
			return ans;
		}
	}
	if(s1>s2){
		return ans;
	}else{
		return -1;
	}
	if(s1==s2){
		return -1;
	}
	if(ans==0){
		return -1;
	}
	return ans;
}
int32_t main(){
	qubais_judge;
	IOS;
	int t;
	cin>>t;
	while(t--){
		int n1;
		int n2;
		cin>>n1>>n2;
		cout<<print(n1,n2)<<endl;
	}
	return 0;   
}