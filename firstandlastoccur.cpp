#include<bits/stdc++.h>
#define ll      long long
using namespace std;   
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
       cin>>arr[i];
    }
    int n;
    cin>>n;
    while(n>0){
      n--;
      int key;
      cin>>key;
      auto it1=lower_bound(arr,arr+num,key);
      auto it2=upper_bound(arr,arr+num,key);
      if(it1==it2){
       cout<<-1<<" "<<-1<<endl;
      }else{
      	cout<<it1-arr<<" "<<it2-arr-1<<endl;
      }
    }
    return 0;
}