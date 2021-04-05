#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
bool compare(string a,string b){
//if false it changes
if(a[0]>b[0]){
return true;
}

if(a.length()==b.length()){
for(int i=0;i<a.length();i++){
if(a[i]<b[i]){
return false;
}
}
return true;
}
if(a[0]==b[0]){
return a[a.length()-1]>b[b.length()-1];
}
return false;
}

bool compare_optimized(string a,string b){
if(a+b>b+a){
return true;
}

return false;
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
	while(n>0){
     n--;
     int num;
     cin>>num;
     string arr[num];
     for(int i=0;i<num;i++){
     cin>>arr[i];
     }
     sort(arr,arr+num,compare_optimized);
	for(int i=0;i<num;i++){
    cout<<arr[i];
	}
	cout<<endl;
	}
	return 0;     
}