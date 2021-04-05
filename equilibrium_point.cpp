#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int equilibrium(vector<int> &arr){
int index=-1;
int left[arr.size()];
int right[arr.size()];
left[0]=arr[0];
right[arr.size()-1]=arr[arr.size()-1];
for(int i=1;i<arr.size();i++){
left[i]=left[i-1]+arr[i];
}
for(int i=arr.size()-2;i>=0;i--){
right[i]=right[i+1]+arr[i];
}
for(int i=1;i<arr.size()-1;i++){
if(left[i-1]==right[i+1]){

index=i+1;
break;
}
}

return index;
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
	while(n--){
		int num;
		cin>>num;
		if(num==1){
			int arr;
			cin>>arr;
            cout<<1<<endl;
		}else 
		{ vector<int> v(num);
			for(int i=0;i<num;i++){
                     cin>>v[i];
			}

			cout<<equilibrium(v)<<endl;

         }
	}
	return 0;     
}