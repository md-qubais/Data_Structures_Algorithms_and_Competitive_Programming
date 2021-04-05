#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


int32_t main(){
	qubais_judge;
	IOS;
	int n;
   int sum=0;
	string arr;
   cin>>arr;
//   reverse(arr.begin(),arr.end());
	n=arr.length();
   int bit=(1<<n)-1;
	for(int i=0;i<=bit;i++){
      int mask=i;
      int j=0;
      int n1=1;

      //here think below that u
      //we code in any new technique
      while(mask){
         if(mask&n1){
         	cout<<arr[j]<<"";
         }          
         j++;
         mask=mask>>1;
         }
      cout<<" ";
	}
   cout<<endl;
   cout<<bit+1<<endl;
	return 0;   
}