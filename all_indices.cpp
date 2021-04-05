#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;   
void all_indices(vector<int> &arr,int key,int i){
if(i==arr.size()){
return ;
}
if(arr[i]==key){
cout<<i<<" ";
}
all_indices(arr,key,i+1);

}



int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
    cin>>arr[i];
	}
	int num;
	cin>>num;
	all_indices(arr,num,0);
	cout<<endl;
	return 0;     
}