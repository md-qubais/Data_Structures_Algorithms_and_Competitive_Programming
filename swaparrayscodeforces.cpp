#include<bits/stdc++.h>
using namespace std;   
int main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n>0){
       n--;
       int num,moves;
       cin>>num>>moves;
       int arr1[num],arr2[num];
       for(int i=0;i<num;i++){
       cin>>arr1[i];
       }
       for(int i=0;i<num;i++){
       cin>>arr2[i];
       } 
       sort(arr1,arr1+num);
       sort(arr2,arr2+num,greater<int>());
       for(int i=0;i<num&&moves>0;i++){
          if(arr2[i]>arr1[i]){
             swap(arr1[i],arr2[i]);
             moves--;
          }
       }
       int sum=0;
        for(int i=0;i<num;i++){
         sum=sum+arr1[i];
        }
        cout<<sum<<endl;
       
    }
    return 0;   
} 