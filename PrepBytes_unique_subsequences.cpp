#include<bits/stdc++.h>
#include<cstring>
#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int   long long
#define endl  "\n"
using namespace std;
int32_t main(){
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
	#endif
	IOS; 
	int n1;
	cin>>n1;
	int arr[n1];
	for(int i=0;i<n1;i++){
     cin>>arr[i];
	}
   int n=(1<<n1)-1;
   int res=0;
   int max_val=INT_MIN;
    for(int i=1;i<=n;i++){ 
    unordered_map<char,int> m;
    int max_val=INT_MIN;
        int mask=i;
      	int j=0;
        while(mask>0){
      if(mask&1){
             string num=to_string(arr[j]);
             cout<<num<<" ";
      	      for(int i=0;i<num.length();i++){
      	      	m[num[i]]++;
      	      	max_val=max(m[num[i]],max_val);        	      	
      }
  }
        j++;
       mask=mask>>1;
       } 
       cout<<endl;
       if(max_val==1){
             res++;
       }
    }
  cout<<res<<endl;
	return 0;     
}