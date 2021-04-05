#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef qubais_judge
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    while(num>0){
      num--;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int pre[n];
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
     pre[i]=pre[i-1]+arr[i];
    }
    int res=0;
    for(int i=0;i<n;i++){
     for(int j=i;j<n;j++){
       int a=pre[j]-pre[i]+arr[i];
       if(a%n==0){
       res++;
       }
     }
    }
cout<<res<<endl;
}
    return 0;
}






