#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int len(int *arr,int num,int k){
	int res=0;
	int pre=0;
	unordered_map<int,int> m;
	for(int i=0;i<num;i++){
            pre+=arr[i];
            if(pre==k){
             res=max(res,i+1);  
             m.insert(make_pair(pre,i));
            }else if(m.find(pre)!=m.end()){
                  res=max(res,i-m[pre]);
            }else{
            	m.insert(make_pair(pre,i));
            }
	}

return res;
}
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int num,key;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];

	}
	cin>>key;
	cout<<len(arr,num,key)<<endl;
	return 0;     
}