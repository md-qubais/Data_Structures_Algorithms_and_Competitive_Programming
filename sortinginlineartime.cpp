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
    int l=0;
    int m=l;
    int h=num-1;
    while(m<=h){
     if(arr[m]==0){
       swap(arr[m],arr[l]);
       l++;
       m++;
     }
   else  if(arr[m]==1){
        m++;
     }
     else{
          swap(arr[m],arr[h]);
          h--;
     }

    }
    for(int i=0;i<num;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}