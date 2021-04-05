#include<bits/stdc++.h>
using namespace std;
bool canplacecows(int *arr,int n,int mid,int c){
int count=1;
int firstcow=arr[0];
for(int i=0;i<n;i++){
if(arr[i]-firstcow>=mid){
firstcow=arr[i];
count++;
}
if(count==c){
return true;
}

}
return false;
}
int main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    while(num>0){
     num--;
     int n,c;
     cin>>n>>c;
     int arr[n];
     for(int i=0;i<n;i++){
     cin>>arr[i];
     }
     sort(arr,arr+n);
     int s=0,e=arr[n-1]-arr[0];
     int mid;
     int ans=0;
     while(s<=e){
        mid=(s+e)/2;
        bool canplace=canplacecows(arr,n,mid,c);
        if(canplace){
          ans=mid;
          s=mid+1;
        }else{
            e=mid-1;
        }

     }
     cout<<ans<<endl;
    }
    return 0;
}