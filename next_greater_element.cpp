#include<bits/stdc++.h>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
void next_greater(int *arr,int *res,int n){
	stack<int> s;
	s.push(arr[n-1]);
	res[n-1]=-1;
	for(int i=n-2;i>=0;i--){
      while(!s.empty() and s.top()<arr[i]){
      	s.pop();
      }
      if(s.empty()==true){
            s.push(arr[i]);
            res[i]=-1;
          
      }else{
      	res[i]=s.top();
      	s.push(arr[i]);
      	
      }
	}
}

int32_t main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		int arr[num];
		int res[num];
		for(int i=0;i<num;i++){
           cin>>arr[i];
		}
     next_greater(arr,res,num);
     for(int i=0;i<num;i++){
             cout<<res[i]<<" ";
     }
     cout<<endl;
	}
	return 0;     
}