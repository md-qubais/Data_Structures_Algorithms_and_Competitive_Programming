#include<bits/stdc++.h>
using namespace std;   
int main() 
{
	#ifndef qubais_judge
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   vector<int> v{1,2,3,4,5,6};
    int n=v.size();
    int num=1;
    for(int i=1;i<=n;i++){
    num=num*i;
    }
    for(int i=0;i<num;i++){
    next_permutation(v.begin(),v.end());
     for(int i=0;i<n;i++){
      cout<<v[i]<<" ";
     }
     cout<<endl;
    }
    string str="qubais";
    int n=str.length();
    int num=1;
    for(int i=1;i<=n;i++){
       num=num*i;
    }
    for(int i=0;i<num;i++){
    	cout<<str<<endl;
         next_permutation(str.begin(),str.end());
    }
    
    int n;
    cin>>n;
   while(n>0){
     n--;
     int num;
     cin>>num;
     int arr[num];
    for(int i=0;i<num;i++){
       cin>>arr[i];
     }
     next_permutation(arr,arr+num);
     for(int i=0;i<num;i++){
     cout<<arr[i]<<" ";
     }
     cout<<endl;
   }
    int arr[]={5,6,7,8,9,10,1,2,3,4};
    int n=10;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}