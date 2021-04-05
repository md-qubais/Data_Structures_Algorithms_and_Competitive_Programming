#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define int long long
#define endl "\n"
#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;
int* get_ans(int *arr,int i,int n,int &size,int key,int s){
    if(i==n){
        return new int[size];
    }
    if(arr[i]==key){
        size++;
        int *ans=get_ans(arr,i+1,n,size,key,s+1);
        ans[s]=i;
        return ans;
    }
    return get_ans(arr,i+1,n,size,key,s);

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
    int size=0;
    int *ans=get_ans(arr,0,n,size,k,0);
    for(int i=0;i<size;i++){
        cout<<ans[i]<<endl;
    }
    cout<<endl;
    return 0;
}
