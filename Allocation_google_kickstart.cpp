#include<bits/stdc++.h>
using namespace std;
int main(){

    #ifndef qubais_judge
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int c=1;
    while(t>0){
         t--;
         
         int res=0;
         int num,tot;
         cin>>num>>tot;
         int arr[num];
         for(int i=0;i<num;i++){
             cin>>arr[i];
         }
         sort(arr,arr+num);
        if(arr[0]>tot){
    cout<<"Case #"<<c<<": "<<res<<endl;        
        } else{
            int ans=0;
        for(int i=0;i<num;i++){
             if(ans+arr[i]<=tot){
                ans=ans+arr[i];
                res++;

             }else break;
        }    
    cout<<"Case #"<<c<<": "<<res<<endl;        
            
        }
         
    c++;     
    }
    return 0;
}