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
	/*int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		vector<int> v(num);
		for(int i=0;i<num;i++){
          cin>>v[i];
		}
		if(num==1){
         cout<<v[0]<<" "<<v[0]<<endl;
         return 0;
		}
	   sort(v.begin(),v.end());
	   int minsum=0,maxsum=0;
	   for(int i=0;i<v.size();i=i*2){
	   	minsum+=abs(v[i]-v[i+1]);
	   }
	   cout<<minsum<<" ";
	   int s=0;
	   int e=v.size()-1;
	   while(s<e){
	   	maxsum+=abs(v[s]-v[e]);
        s++;
        e--;
	   }
	}
	*/
	return 0;     
}