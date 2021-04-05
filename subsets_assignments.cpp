#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;


void reverse_it(int *arr,int n){
   int i=0;
   int j=n-1;
   while(i<j){
      swap(arr[i++],arr[j--]);
   }

}

void get(int *arr,int n,int key){

int bit=(1<<n)-1;
   int ans[100000];
   for(int i=0;i<=bit;i++){
      int mask=i;
      int j=0;
      int n1=1;
      int k=0;
      int sum=0;
      //here think below that u
      //we code in any new technique
      while(mask){//here we can write mask^0
         if(mask&1){
            sum=sum+arr[j];
           ans[k++]=arr[j];
         }
         j++;
         mask=mask>>1;
   }
   if(sum==key){
      for(int i=0;i<k;i++){
         cout<<ans[i]<<" ";
      }
      cout<<endl;
   }
}

}
int32_t main(){
	qubais_judge;
	IOS;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
         cin>>arr[i];
	}
   int k;
   cin>>k;
   reverse_it(arr,n);
   get(arr,n,k);
	return 0;   
}