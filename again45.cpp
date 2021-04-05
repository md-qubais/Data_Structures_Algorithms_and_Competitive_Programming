#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

void print(int *arr,int *ans,int i,int j,int k,int n,int sum){
  //  cout<<i<<endl;
        
    if(i==n){
        if(sum==k){
            for(int s=0;s<j;s++){
                cout<<ans[s]<<", ";
            }
            
        cout<<"."<<endl;
        return;
        }
    
        return;
    }
    if(sum>k){
        return;
    }
    ans[j]=arr[i];
    if(sum>k){

        return;
    }
    print(arr,ans,i+1,j+1,k,n,sum+ans[j]);
    print(arr,ans,i+1,j,k,n,sum);    
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
    int ans[n];
    int sum=0;
    print(arr,ans,0,0,k,n,sum);
    return 0;
}